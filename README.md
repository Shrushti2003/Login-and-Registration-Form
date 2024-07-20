# Login and Registration Form Application

## About
This project is a C++ GUI application featuring a user-friendly interface for user login and registration. The application ensures data management through a straightforward method, providing functionalities for both new user registration and existing user login.

## Purpose of the Project
The primary goal of this project is to create an accessible and secure platform for managing user credentials. It is designed to help users understand the basics of user authentication processes and to provide a practical tool for handling user data.

## Features
### Core Functionality
- **Main Form**:
  - Users can choose between login and registration options.
- **Registration Form**:
  - Users can enter their details to create a new account.
- **Login Form**:
  - Registered users can log in using their credentials.

### Registration and Login Process
- **Registration**:
  - Users fill out a form with their name, age, username, and password.
  - The information is saved to a file.
- **Login**:
  - Users enter their registered username and password.
  - The application verifies the credentials and provides feedback.

## Instructions
### Main Form
- **Options**:
  - **Register**: Directs to the Registration Form.
  - **Login**: Directs to the Login Form.

### Registration Form
- **User Input**:
  - Enter your Name, Age, Username, and Password.
- **Save Button**:
  - Saves the entered information to a file in the Win32 folder -> Debug -> RegisteredUsers.

### Login Form
- **User Input**:
  - Enter your registered Username and Password.
- **Login Button**:
  - Verifies the credentials.
  - Displays a success message if the credentials are correct.
  - Displays an error message if the credentials are incorrect.

## Example Usage
### Registering a New User
1. Open the Main Form.
2. Click on the `Register` button.
3. Fill out the Registration Form:
   - Name: `John Doe`
   - Age: `25`
   - Username: `johndoe`
   - Password: `password123`
4. Click the `Save` button to save the information.

### Logging In
1. Open the Main Form.
2. Click on the `Login` button.
3. Fill out the Login Form:
   - Username: `johndoe`
   - Password: `password123`
4. Click the `Login` button.
5. If the credentials are correct, a message "Success" will be displayed.
6. If the credentials are incorrect, a message "Wrong username/password" will be displayed.

## Conclusion
The Login and Registration Form application provides a simple and effective way to manage user credentials. It serves as a practical tool for user authentication and offers an educational example of basic registration and login processes in C++. Users can easily register and log in, with their data securely managed.

[YouTube Video Link]


---
