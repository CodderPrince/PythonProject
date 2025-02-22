import streamlit as st
import qrcode
from PIL import Image
import io

# Function to generate QR code with image and link
def generate_qr_code(link, image=None, color_fg='black', color_bg='white'):
    # Create QR code
    qr = qrcode.QRCode(
        version=1,
        error_correction=qrcode.constants.ERROR_CORRECT_L,
        box_size=10,
        border=4,
    )
    qr.add_data(link)
    qr.make(fit=True)
    
    # Generate QR code with specified colors
    img = qr.make_image(fill=color_fg, back_color=color_bg)
    
    # If image is uploaded, integrate it into the QR code
    if image:
        img = add_logo_to_qr(img, image)
    
    return img

# Function to add a custom image to the QR code
def add_logo_to_qr(qr_img, logo):
    logo = Image.open(logo)
    logo = logo.convert("RGBA")
    
    # Calculate logo size
    qr_width, qr_height = qr_img.size
    logo_size = int(qr_width / 4)
    
    # Resize logo
    logo = logo.resize((logo_size, logo_size))
    
    # Get position to place logo (center of QR code)
    logo_position = ((qr_width - logo_size) // 2, (qr_height - logo_size) // 2)
    
    # Paste logo onto the QR code image
    qr_img.paste(logo, logo_position, logo)
    
    return qr_img

# Function to convert PIL image to byte stream
def pil_to_bytes(img):
    img_byte_arr = io.BytesIO()
    img.save(img_byte_arr, format="PNG")
    img_byte_arr.seek(0)
    return img_byte_arr

# Streamlit UI
st.title("Custom QR Code Generator")
st.write("Create a custom QR code with your own image, link, and dynamic color selection.")

# User Input for Link
link = st.text_input("Enter your URL or Link:", "")

# File upload for custom image/logo
uploaded_image = st.file_uploader("Upload an Image for QR Code", type=["png", "jpg", "jpeg"])

# Color pickers for foreground and background
color_fg = st.color_picker("Select QR Code Foreground Color", "#000000")
color_bg = st.color_picker("Select QR Code Background Color", "#FFFFFF")

# Button to generate QR code
if st.button("Generate QR Code"):
    if link:
        # Generate QR code with the given inputs
        qr_code_img = generate_qr_code(link, uploaded_image, color_fg, color_bg)
        
        # Convert the image to bytes for displaying
        qr_code_img_byte = pil_to_bytes(qr_code_img)
        
        # Display generated QR code
        st.image(qr_code_img_byte, caption="Generated QR Code", use_column_width=True)
        
        # Option to download the QR code
        st.download_button(
            label="Download QR Code",
            data=qr_code_img_byte,
            file_name="custom_qr_code.png",
            mime="image/png"
        )
    else:
        st.error("Please enter a link to generate the QR code.")
