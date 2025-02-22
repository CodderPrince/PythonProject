import streamlit as st
import qrcode
from PIL import Image, ImageDraw
import tempfile
import os

def generate_qr_code_with_logo(link, logo_file=None, color="black", bg_color="white"):
    # Generate QR Code
    qr = qrcode.QRCode(
        version=1,  # Controls the size of the QR Code
        error_correction=qrcode.constants.ERROR_CORRECT_H,  # High error correction
        box_size=10,
        border=4,
    )
    qr.add_data(link)
    qr.make(fit=True)

    # Create a QR code image with the specified colors
    qr_img = qr.make_image(fill_color=color, back_color=bg_color).convert("RGB")

    # Add logo if provided
    if logo_file:
        try:
            with tempfile.NamedTemporaryFile(delete=False, suffix=".png") as temp_file:
                temp_filepath = temp_file.name
                temp_file.write(logo_file.read())

            logo = Image.open(temp_filepath).convert("RGBA")
            os.unlink(temp_filepath) #remove temporary file
            # Resize logo
            logo_size = int(qr_img.size[0] * 0.2)  # Adjust logo size to 20% of QR Code size
            logo = logo.resize((logo_size, logo_size), Image.Resampling.LANCZOS)

            # Calculate positioning for the logo
            pos = (
                (qr_img.size[0] - logo_size) // 2,
                (qr_img.size[1] - logo_size) // 2,
            )

            qr_img.paste(logo, pos, mask=logo)
        except Exception as e:
            st.error(f"Error processing logo: {e}")
            return None # Return None to prevent further processing if error occurs.

    return qr_img

# Streamlit App
st.title("Custom QR Code Generator")

# Input for the link
link = st.text_input("Enter the link or text for the QR Code:")

# Upload logo
logo_file = st.file_uploader("Upload a logo (optional):", type=["png", "jpg", "jpeg"])

# Select QR Code color
color = st.color_picker("Pick a QR Code color:", "#000000")
bg_color = st.color_picker("Pick a background color:", "#FFFFFF")

if st.button("Generate QR Code"):
    if link:
        # Generate QR code with user inputs
        qr_code_img = generate_qr_code_with_logo(link, logo_file, color=color, bg_color=bg_color)

        if qr_code_img: # Check if the image was successfully generated
            # Display the QR Code
            st.image(qr_code_img, caption="Your Custom QR Code", use_column_width=True)

            # Provide download option
            with tempfile.NamedTemporaryFile(delete=False, suffix=".png") as temp_file:
                temp_filepath = temp_file.name
                qr_code_img.save(temp_filepath)
                with open(temp_filepath, "rb") as file:
                    st.download_button("Download QR Code", file, file_name="custom_qr_code.png", mime="image/png")
                os.unlink(temp_filepath) #remove temporary file

    else:
        st.error("Please enter a link or text to generate a QR Code.")
