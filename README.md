# Employee Detail Management System

A simple C++ console application for managing employee details. This is my project where I aimed to practice and apply basic Object-Oriented Programming (OOP) concepts.

## Features

- Add new employee records.
- View details of existing employees.
- Update employee information.
- Delete employee records.
- User-friendly text-based menu for managing employee details.<br><br>

## Getting Started

To get started with the Employee Detail Management System, follow these steps:<br><br>

**1. Clone the Repository**<br>
```bash
git clone https://github.com/KeshavPsdNeupane/Employee_detail.git
```
<br><br>

**2. Navigate to the Project Directory**<br>
```bash
cd Employee_detail/BaseEngine
```
<br><br>

**3. Build the Project**<br>
Compile the code using a C++ compiler, such as `g++`:<br>
```bash
g++ -o employee_manager main.cpp
```
<br><br>

**4. Run the Application**<br>
Execute the compiled binary:<br>
```bash
./employee_manager
```
<br><br>

## How to Use

When you run the program, you will see a menu with the following options:<br>
- Add a new employee<br>
- View employee details<br>
- Update employee information<br>
- Delete an employee<br>
- Exit the program<br>

Follow the on-screen instructions to choose an option and manage employee records.<br><br>

## Code Structure

- **`main.cpp`**: Contains the `main()` function that displays the menu and handles user input.
- **`File.h`**: Declares the `Employee` class with member functions for managing employee data.
- **`File.cpp`**: Implements the methods of the `Employee` class.
- **`BaseHandling.h`**: Declares functions for adding, viewing, updating, and deleting employee records.<br>
- **`BaseHandling.cpp`**: Implements the functions for interacting with employee records.

## Why This Code Structure?

- **Simple and Organized:** Separates the main menu logic (`main.cpp`) 
from the employee data management logic (`Employee.cpp` and `Database.cpp`), 
making the code easier to understand and maintain.
- **Modular Design:** Each file has a specific role, 
making it easier to extend features or modify functionality

## Contributing

This project is a great opportunity for learning and improving C++ skills. If you have any tips, suggestions, or improvements, please let me know by opening an issue or a pull request.<br><br>
