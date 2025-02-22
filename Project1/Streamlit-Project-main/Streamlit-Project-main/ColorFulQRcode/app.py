import os
import io
from PIL import Image, ImageColor
import streamlit as st
import qrcode
import numpy as np

def generate_gradient_background(width, height, start_color, end_color):
    """Generates a gradient background image from start_color to end_color."""
    gradient = np.zeros((height, width, 4), dtype=np.uint8)  # 4 for RGBA
    for i in range(height):
        blend = i / height
        color = (
            int(start_color[0] * (1 - blend) + end_color[0] * blend),
            int(start_color[1] * (1 - blend) + end_color[1] * blend),
            int(start_color[2] * (1 - blend) + end_color[2] * blend),
            255,  # Alpha channel set to fully opaque
        )
        gradient[i, :] = color
    gradient_img = Image.fromarray(gradient, mode="RGBA")
    return gradient_img


def generate_qr_code_with_logo(link, logo_path=None, color="black", bg_color=None):
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
            logo_size = int(qr_img.size[0] * 0.2)
            logo = logo.resize((logo_size, logo_size), Image.Resampling.LANCZOS)
            pos = (
                (qr_img.size[0] - logo_size) // 2,
                (qr_img.size[1] - logo_size) // 2,
            )
            qr_img.paste(logo, pos, mask=logo)
        except Exception as e:
            st.error(f"Error processing logo: {e}")

    return qr_img


# Streamlit App
st.title("Custom QR Code Generator with Gradient Background")

link = st.text_input("Enter the link or text for the QR Code:")
logo_file = st.file_uploader("Upload a logo (optional):", type=["png", "jpg", "jpeg"])
color = st.color_picker("Pick a QR Code color:", "#000000")
bg_color_start = st.color_picker("Pick the start color for the gradient:", "#FFFFFF")
bg_color_end = st.color_picker("Pick the end color for the gradient:", "#FFFFFF")

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
        
        # Generate QR Code
        qr_code_img = generate_qr_code_with_logo(link, logo_file, color=color, bg_color=gradient_bg)

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
