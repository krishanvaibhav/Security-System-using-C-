# Security-System-using-Cpp

This C++ program implements a basic security system that allows users to register, login, and change their passwords. The program utilizes file handling for data storage, and it provides a simple command-line interface for users.

## Features

1. **User Registration:** Users can register by providing their name, password, and age. The registration details are stored in a file named "file.txt."

2. **User Login:** Registered users can log in by entering their username and password. The program verifies the credentials against the stored information and displays user details upon successful login.

3. **Password Change:** Users can change their passwords after successfully logging in. The program prompts users to enter their old password and then allows them to set a new password.

## Usage

1. **Options:**
   - Enter `1` to register a new user.
   - Enter `2` to log in with existing credentials.
   - Enter `3` to change the password after logging in.
   - Enter `4` to end the program.

2. **File Storage:**
   - User registration details are stored in the file "file.txt."
   - Passwords are stored in plain text in this example; consider using secure hashing for production.

## Important Considerations

1. **Security Risks:**
   - This is a basic example and should not be used as-is in a production environment.
   - Passwords are stored in plain text, which is a significant security risk. In a real-world scenario, use secure password hashing techniques.

2. **File Handling:**
   - The program uses simple file handling for data storage.We can use a database for better scalability and security.

3. **Improvements:**
   - This program is meant for educational purposes and may require enhancements for a real-world application.
   - Consider adding input validation, error handling, and a more robust authentication mechanism.

## Contributing

Contributions are welcome! If you find bugs or have suggestions for improvements, please open an issue or submit a pull request.
