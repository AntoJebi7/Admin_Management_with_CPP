Admin Management with CPP for Students in University
Overview
Admin Management with CPP for Students in University is a mini prototype student management system built using C++. This terminal-based application is designed to manage student records efficiently and provides a basic set of features. The project is currently under development and will be updated with additional features in the future.

Features
Add New Student: Input student details including roll number, name, and age.
Display All Students: View the complete list of students with their details.
Search Student: Find a student by roll number.
Update Student Information: Modify existing student records, including roll number, name, and age.
Delete Student Record: Remove a student's record from the system.
Prerequisites
To run the Admin Management system, you need:

A C++ compiler (e.g., g++ or clang++)
An IDE or text editor (e.g., Visual Studio Code)
Basic understanding of C++ programming
Installation
Clone the Repository

bash
Copy code
git clone https://github.com/AntoJebi7/admin-management-cpp-for-students.git
cd admin-management-cpp-for-students
Compile the Code

Use the following command to compile the source code:

bash
Copy code
g++ -o admin_management main.cpp
This will generate an executable named admin_management.

Usage
To run the Admin Management System:

Execute the Program

bash
Copy code
./admin_management
Follow the On-Screen Prompts

Add New Student: Enter student roll number, name, and age.
Display All Students: View all student records.
Search for a Student: Enter the roll number to find a specific student.
Update Student Information: Choose an option to update roll number, name, age, or all details.
Delete Student Record: Enter the name of the student to delete their record.
Code Structure
main.cpp: Contains the main application logic and user interface.
Student class: Defines the Student class with methods to manage student data.
Helper Functions: Include functions for adding, displaying, searching, updating, and deleting student records.
