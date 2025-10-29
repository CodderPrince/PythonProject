# Hospital Patient Management System

## Abstract
This project presents a comprehensive **Hospital Patient Management System** developed using a **Flask backend**, **MongoDB database**, and a dynamic **HTML/CSS/JavaScript frontend**. The system efficiently manages hospital operations including patient and doctor registration, visit tracking with note updates, and room assignment/release with historical logging. Key features include detailed profiles, doctor revenue reporting, and a versatile custom query interface.  
Additionally, it integrates advanced functionalities such as **prescription management with PDF and QR code generation**, and **patient QR code access** for rapid information retrieval. The architecture emphasizes modularity, data validation, and a user-friendly interface, providing a scalable solution for modern hospital administration.

---

## 1. Introduction
The **Hospital Patient Management System** is a web-based application designed to streamline hospital operations such as patient, doctor, visit, room, and prescription management.  
It uses **Flask** for the backend, **MongoDB** as the NoSQL database, and a responsive **HTML/CSS/JavaScript** frontend.  
The system fulfills all core project requirements while introducing bonus features that enhance usability and operational efficiency.

---

## 2. Technologies Used

**Frontend:**  
- HTML5, CSS3, JavaScript (Fetch API for asynchronous operations)

**Backend:**  
- Python 3 with Flask framework

**Database:**  
- MongoDB (NoSQL Document Database)

**Libraries:**  
- `flask_cors` – Enables secure frontend-backend communication  
- `pymongo` – MongoDB driver for Python  
- `json` – Handles serialization/deserialization  
- `qrcode` – Generates scannable QR codes  
- `base64` – Encodes binary data for embedding in HTML  
- `bson` – Supports MongoDB ObjectId  
- `reportlab` – Generates professional PDF documents

---

## 3. Core Functionalities and Implementation

### 3.1 Patient Management
- **Registration:** Patients are registered via `/patient/register` with details like `_id`, name, age, gender, phone number, and conditions. Validation ensures unique IDs and correct formats.  
- **Details & History:** `/patient/details/<patient_id>` displays full patient data, assigned room, visit history, and prescriptions.  
- **Filter by Condition:** `/patients/by_condition/<condition>` allows filtering by specific medical conditions.

### 3.2 Doctor Management
- **Registration:** Doctors register via `/doctor/register` with validation for duplicates and phone numbers.  
- **CRUD Operations:** Supports list, update, and delete actions via `/doctors`, `/doctor/update`, and `/doctor/delete`.  
- **Revenue per Doctor:** `/revenue/doctor_visits` calculates total revenue within a date range, showing related visits and patient info.

### 3.3 Visit Management
- **New Visit:** `/visit/new` records new visits with patient_id, doctor_id, date, fee, and notes.  
- **Update Visit Note:** `/visit/update_note` updates notes and logs the last update date.  
- **Visits by Doctor & Date:** `/visits/by_date_doctor` filters visits by doctor and date range.

### 3.4 Room Management
- **Assign Room:** `/room/assign` assigns rooms with occupancy and assignment validation.  
- **Release Room:** `/room/release` releases and logs rooms into historical records.  
- **View Assignments:** `/room/assignments/active` and `/room/assignments/all` display active and historical room data.  
- **Custom Query Interface:** `/query` allows raw MongoDB operations for administrative use.

---

## 4. Optional Implementations

### 4.1 Prescription Management
- **Creation:** `/prescription/new` supports multiple medicines per prescription, including dosage and instructions.  
- **Viewing:** Prescriptions appear in patient details and can be viewed individually.  
- **PDF Generation:** `/prescription/download/<prescription_id>` generates downloadable PDF using ReportLab.  
- **QR Code Access:** `/prescription/qr_download_image/<prescription_id>` generates a QR code linking directly to the PDF.

### 4.2 QR Code for Patient Information
- **Generation:** `/patient/qr/<patient_id>` generates a QR code embedding complete patient data.  
- **Detailed QR Page:** `/patient/qr_page/<patient_id>` displays all patient details for quick access.

---

## 5. Schema Overview

**Collections and Fields**
- `patients`: _id, name, age, gender, phone_number, conditions (array), room_id  
- `doctors`: _id, name, phone_number, specialty  
- `visits`: patient_id, doctor_id, date, fee, notes, last_note_update_date  
- `rooms`: _id, type, occupied, bed_count  
- `prescriptions`: _id, patient_id, doctor_id, prescription_date, medicines, diagnosis, notes, created_at, visit_id  
- `assigned_room`: _id, room_id, patient_id, assignment_date  
- `released_room`: _id, room_id, patient_id, assignment_date, release_date

---

## 6. Query Summary by Feature

**New Visit:** insertOne, find  
**Update Visit Note:** updateOne ($set)  
**Assign Room:** updateOne ($set), insertOne  
**Release Room:** updateOne ($unset, $set), deleteOne, insertOne  
**Filter Patients by Condition:** find ($elemMatch)  
**Visits by Date & Doctor:** find ($gte, $lte)  
**Revenue per Doctor:** aggregation ($group, $sum)  
**Create Prescription:** insertOne, find  
**View/Download Prescription:** find

---

## 7. Limitations
- **Security:** No authentication or role-based access control. The `/query` endpoint is insecure for production.  
- **Frontend Scalability:** Plain JavaScript frontend may become hard to maintain.  
- **Missing Modules:** Appointments and nurses management not implemented.  
- **UI Limitations:** No built-in search, sort, or pagination for large datasets.  
- **Error Reporting:** Relies on basic JavaScript alerts instead of elegant UI notifications.

---

## 8. Future Improvements
- **Authentication & RBAC:** Add secure login and permission-based access.  
- **Frontend Framework:** Migrate to React or Angular for scalability and cleaner UI.  
- **Additional Modules:** Implement appointment and nurse management.  
- **Advanced Data Features:** Add search, filter, sort, and pagination to all data lists.  
- **Data Visualization:** Use Chart.js for interactive dashboards and analytics.  
- **Error Handling:** Replace alert() with non-intrusive UI notifications and server-side logs.  
- **Deployment & Scalability:** Dockerize and enable MongoDB replication/sharding for production.

---

## 9. Conclusion
The **Hospital Patient Management System** provides a robust and feature-rich solution for hospital administration.  
It successfully integrates essential functionalities and advanced modules such as prescription PDF generation and QR code access.  
With Flask and MongoDB forming a strong backend foundation, the system is well-positioned for further expansion.  
Enhancing security, scalability, and UI sophistication will transform it into a production-ready healthcare management platform.
