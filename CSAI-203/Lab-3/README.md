# Courses API

## Overview

This repository contains a simple API for managing courses, built with Flask. The API includes five endpoints that allow users to perform CRUD operations (Create, Read, Update, and Delete) on courses.

## API Endpoints

The API provides the following endpoints:

1. **GET /courses**: Retrieve a list of all courses.
2. **GET /courses/{courseID}**: Retrieve a specific course by its ID.
3. **POST /courses**: Add a new course.
4. **PUT /courses/{courseID}**: Update an existing course by its ID.
5. **DELETE /courses/{courseID}**: Delete a course by its ID.

## Requirements

1. **Flask**: Ensure you have Flask installed in your Python environment.
2. **Postman**: Use Postman to test the API.
3. **Swagger**: Use Swagger Editor to view the API documentation.

## Postman Collection

A Postman collection has been created to test the API with various scenarios, including both valid and invalid input. The collection includes the following test cases:

1. Retrieve all courses (valid input).
2. Retrieve a course by valid course ID (valid input).
3. Retrieve a course by invalid course ID (invalid input).
4. Add a new course with valid data (valid input).
5. Add a new course with missing required fields (invalid input).
6. Update a course with valid data (valid input).
7. Delete a course by valid course ID (valid input).
8. Delete a course by invalid course ID (invalid input).

### Postman Collection URL

[Postman Collection](https://www.postman.com/cryosat-geoscientist-8430645/workspace/college)

## Swagger Documentation

The API documentation is available in Swagger format, providing details on each endpoint, expected inputs, and outputs.

### Swagger Documentation Screenshot

![Screenshot_20241015_133218](https://github.com/user-attachments/assets/0bb2b04c-5cbd-43f5-8561-4ca23225e472)

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/0x3mr/Zewail.git
   cd CSAI-203/Lab-3
   ```

2. Install the dependencies:
   ```bash
   pip install -r requirements.txt
   ```

3. Run the Flask app:
   ```bash
   python app.py
   ```

4. Open your browser and go to:
   ```
   http://127.0.0.1:5000
