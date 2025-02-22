# Colorful Customize QR code generator
'''
Prince | 12105007
Framework: Streamlit

'''

from PIL import ImageEnhance, ImageChops
import os
import io
from PIL import Image, ImageColor
import streamlit as st
import qrcode
import numpy as np


def generate_qr_code_with_logo(link, logo_path=None, color="black", bg_color=None, logo_opacity=1.0, blend_mode="normal"):
    qr = qrcode.QRCode(
        version=1,
        error_correction=qrcode.constants.ERROR_CORRECT_H,
        box_size=10,
        border=4,
    )
    qr.add_data(link)
    qr.make(fit=True)
    qr_img = qr.make_image(fill_color=color, back_color="transparent").convert("RGBA")

    if bg_color:
        bg_color = bg_color.resize(qr_img.size)
        qr_img = Image.alpha_composite(bg_color, qr_img)

    if logo_path:
        try:
            logo = Image.open(logo_path).convert("RGBA")
            logo_size = int(qr_img.size[0] * 1.0)
            logo = logo.resize((logo_size, logo_size), Image.Resampling.LANCZOS)
            
            # Apply opacity to the logo
            logo = apply_logo_opacity(logo, logo_opacity)
            
            pos = (
                (qr_img.size[0] - logo_size) // 2,
                (qr_img.size[1] - logo_size) // 2,
            )
            
            if blend_mode != "normal":
                logo = apply_blend_mode(qr_img, logo, blend_mode)

            qr_img.paste(logo, pos, mask=logo)
        except Exception as e:
            st.error(f"Error processing logo: {e}")

    return qr_img


def apply_logo_opacity(logo, opacity):
    """Applies opacity to the logo image."""
    if opacity < 1.0:
        alpha = logo.split()[3]
        alpha = ImageEnhance.Brightness(alpha).enhance(opacity)
        logo.putalpha(alpha)
    return logo


def apply_blend_mode(base_img, overlay_img, mode):
    """Apply blending modes between base image and overlay image."""
    if mode == "multiply":
        return ImageChops.multiply(base_img.convert("RGBA"), overlay_img)
    elif mode == "screen":
        return ImageChops.screen(base_img.convert("RGBA"), overlay_img)
    elif mode == "overlay":
        return ImageChops.overlay(base_img.convert("RGBA"), overlay_img)
    else:
        return overlay_img  # Default mode is "normal" (no blending)


# Function to generate gradient background
def generate_gradient_background(width, height, start_color, end_color):
    gradient = np.zeros((height, width, 3), dtype=np.uint8)
    for y in range(height):
        ratio = y / height
        r = int(start_color[0] * (1 - ratio) + end_color[0] * ratio)
        g = int(start_color[1] * (1 - ratio) + end_color[1] * ratio)
        b = int(start_color[2] * (1 - ratio) + end_color[2] * ratio)
        gradient[y,:,:] = (r, g, b)

    # Convert numpy array to Image
    gradient_img = Image.fromarray(gradient)
    gradient_img = gradient_img.convert("RGBA")  # Convert to RGBA for transparency
    return gradient_img


# Custom HTML and CSS for animated colorful yellow text
st.markdown("""
    <style>
        @keyframes rainbow {
            0% { color: #FFEB3B; } /* Yellow */
            14% { color: #FF5722; } /* Red */
            28% { color: #4CAF50; } /* Green */
            42% { color: #2196F3; } /* Blue */
            57% { color: #9C27B0; } /* Purple */
            71% { color: #FFEB3B; } /* Yellow */
            85% { color: #FF5722; } /* Red */
            100% { color: #FFEB3B; } /* Yellow */
        }

        .title {
            font-size: 45px;
            font-weight: bold;
            animation: rainbow 4s infinite;
        }
    </style>
    <div class="title">
        Custom QR Code Generator with Gradient Background Eng. PRINCE
    </div>
""", unsafe_allow_html=True)

# Custom CSS to change background color of the text input field
st.markdown("""
    <style>
        .stTextInput>div>div>input {
            background-color: #90EE90;  /* Light green */
            color: #000000;             /* Black text color */
            font-size: 20px;            /* Font size */
            padding: 10px;              /* Padding for better appearance */
        }
    </style>
""", unsafe_allow_html=True)

# Custom CSS for the "Generate QR Code" button
st.markdown("""
    <style>
        /* Button normal state */
.stButton>button {
    background-color: #8A2BE2;  /* Blue violet */
    color: white;                /* White text */
    font-size: 29px;             /* Font size */
    padding: 12px 25px;          /* Padding for a larger button */
    border-radius: 5px;          /* Rounded corners */
    font-weight: bold;           /* Bold text */
    border: none;                /* Remove border */
    cursor: pointer;            /* Pointer cursor on hover */
}

/* Button hover state */
.stButton>button:hover {
    background-color: #7A5C99;  /* Darker purple on hover */
}

    </style>
""", unsafe_allow_html=True)

# Custom CSS for the "Download QR Code" button
st.markdown("""
    <style>
        /* Button normal state */
        .stDownloadButton>button {
            background-color: #FFA500;  /* Orange background */
            color: white;                /* White text */
            font-size: 18px;             /* Font size */
            padding: 12px 25px;          /* Padding for a larger button */
            border-radius: 5px;          /* Rounded corners */
            font-weight: bold;           /* Bold text */
            border: none;                /* Remove border */
            cursor: pointer;            /* Pointer cursor on hover */
        }

        /* Button hover state */
        .stDownloadButton>button:hover {
            background-color: #FF8C00;  /* Darker orange on hover */
        }
    </style>
""", unsafe_allow_html=True)

# Streamlit app component
link = st.text_input("Enter the link or text for the QR Code:")

# Display the entered link
st.write(f"Entered Link: {link}")
logo_file = st.file_uploader("Upload a logo (optional):", type=["png", "jpg", "jpeg"])
color = st.color_picker("Pick a QR Code color:", "#000000")
bg_color_start = st.color_picker("Pick the start color for the gradient:", "#FFFFFF")
bg_color_end = st.color_picker("Pick the end color for the gradient:", "#FFFFFF")

# Add logo opacity and blending options
logo_opacity = st.slider("Logo Opacity:", 0.0, 1.0, 0.5)

blend_mode = st.selectbox("Select Logo Blending Mode:", ["normal", "multiply", "screen", "overlay"])

if st.button("Generate QR Code"):
    if link:
        try:
            start_color = ImageColor.getrgb(bg_color_start)
            end_color = ImageColor.getrgb(bg_color_end)
        except ValueError as e:
            st.error(f"Invalid color input: {e}")
            st.stop()

        # Generate gradient background
        gradient_bg = generate_gradient_background(400, 400, start_color, end_color)
        
        # Generate QR Code with logo opacity and blending
        qr_code_img = generate_qr_code_with_logo(link, logo_file, color=color, bg_color=gradient_bg, logo_opacity=logo_opacity, blend_mode=blend_mode)

        # Convert to RGB before displaying (Streamlit doesn't support RGBA well)
        qr_code_img = qr_code_img.convert("RGB")

        # Save to buffer for Streamlit
        buf = io.BytesIO()
        qr_code_img.save(buf, format="PNG")
        buf.seek(0)  # Ensure buffer pointer is at the start

        # Display the QR code using Streamlit's st.image (removed 'use_container_width')
        try:
            st.image(buf, caption="Your Custom QR Code")  # Removed use_container_width
        except Exception as e:
            st.error(f"Error displaying image: {e}")

        # Save the image to a file
        i = 1
        filename = "custom_QR_code"
        while os.path.exists(f"{filename}{i}.png"):
            i += 1
        filename = f"{filename}{i}.png"

        # Save the buffer to the file system for download
        buf.seek(0)
        with open(filename, "wb") as file:
            file.write(buf.read())

        # Allow the user to download the generated QR code image
        buf.seek(0)
        st.download_button("Download QR Code", buf, file_name=filename, mime="image/png")
    else:
        st.error("Please enter a link or text.")
