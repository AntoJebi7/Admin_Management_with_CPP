public class ECommerceTestPlan { 
 public static void main(String[] args) { 
 printTestPlan(); 
 } 
 public static void printTestPlan() { 
 // Test Objectives 
 String[] testObjectives = { 
 "Verify user registration functionality", 
 "Test product search functionality", 
 "Test adding/removing items to/from the cart", 
 "Verify checkout and payment process", 
 "Test user account management" 
 }; 
 // Test Scope 
 String testScope = "This test plan covers functional testing of the www.amazon.in e-commerce 
application."; 
 // Test Cases 
 String[] testCases = { 
 "TC001: Verify user can register with valid information","TC002: Verify user cannot register with invalid information", 
 "TC003: Verify user can search for products and view details", 
 "TC004: Verify user can add items to the cart and remove them", 
 "TC005: Verify the checkout and payment process", 
 "TC006: Verify user can update their account information" 
 }; 
 // Print the test plan 
 System.out.println("E-Commerce Test Plan"); 
 System.out.println("-------------------"); 
 System.out.println("Test Objectives:"); 
 for (String objective : testObjectives) { 
 System.out.println("- " + objective); 
 } 
 System.out.println("Test Scope: " + testScope); 
 System.out.println("Test Cases:"); 
 for (String testCase : testCases) { 
 System.out.println("- " + testCase); 
 } 
 } 
}


import java.util.Scanner; 
public class UserRegistrationTestCase { 
 public static void main(String[] args) { 
 // Initialize a Scanner for user input 
 Scanner scanner = new Scanner(System.in);System.out.println("User Registration Test Case"); 
 System.out.print("Enter username: "); 
 String username = scanner.nextLine(); 
 System.out.print("Enter password: "); 
 String password = scanner.nextLine(); 
 System.out.print("Enter email: "); 
 String email = scanner.nextLine(); 
 // Close the scanner 
 scanner.close(); 
 // Check if any of the input fields are empty 
 if (username.isEmpty() || password.isEmpty() || email.isEmpty()) { 
 System.out.println("Test Case: User Registration - Failed (One or more fields are empty)"); 
 } else { 
 // Execute the test case 
 boolean registrationResult = registerUser(username, password, email); 
 // Check the test result 
 if (registrationResult) { 
 System.out.println("Test Case: User Registration - Passed");} else { 
 System.out.println("Test Case: User Registration - Failed"); 
 } 
 } 
 } 
 public static boolean registerUser(String username, String password, String email) { 
 // Simulate the user registration process 
 // In a real application, this would interact with the e-commerce system 
 // and return true if registration is successful, or false otherwise. 
 // For this simple example, let's assume registration is always successful. 
 return true; 
 } 
}} //
// Created by anto on 14/8/24.
//
#include<iostream>
#include <utility>
#include<vector>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

class Student {
private:
    int roll_number,age_of_student;
    string name_of_student;
public:

    Student(int std_roll_number,string std_name,int std_age) {
        roll_number=std_roll_number;
        name_of_student=std::move(std_name);
        age_of_student=std_age;
    }
    void setRollno(int std_roll_number) {
        roll_number=std_roll_number;
    }
    [[nodiscard]] int getrollnum() const {
        return roll_number;
    }
    void setName(string std_name) {
        name_of_student=std::move(std_name);
    }
    string getName(){
        return name_of_student;
    }
    void setAge(int std_age) {
        age_of_student=std_age;
    }
    [[nodiscard]] int getAge() const {
        return age_of_student;
    }

    void displayRecords() {
        const string CYAN = "\033[36m";
        const string RESET = "\033[0m";
        const int boxWidth = 45; // Adjust the box width as needed

        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << "\t\t\t\t\t " << setw(13) << left << "Roll Number:" << setw(boxWidth - 15) << roll_number << endl;
        cout << "\t\t\t\t\t " << setw(13) << left << "Full Name:" << setw(boxWidth - 15) << name_of_student << endl;
        cout << "\t\t\t\t\t " << setw(13) << left << "Age:" << setw(boxWidth - 15) << age_of_student  << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
    }

};

void addNewScholar(vector<Student> &students) {
    int roll_num,age;
    string name;
    cout<<"enter roll num:";
    cin>>roll_num;
    for (const auto & student : students) {
        if(student.getrollnum()==roll_num) {
            cout<<"\t\tUser Already Exist"<<endl;
        }
    }
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Age : ";
    cin>>age;
    Student newscholar(roll_num,name,age);
    students.push_back(newscholar);
}
void DisplayAllScholars(vector<Student>& students) {
    if(students.empty()) {
        cout<<"\t\t No Records Found "<<endl;
        return;
    }
    for(auto & student : students) {
        student.displayRecords();
        cout<<endl;
    }
}
void SearchScholar(vector<Student>& students) {
    int rollNumber;
    cout << "\t\tPlease enter the scholar's roll number: ";
    cin >> rollNumber;
    bool found = false;
    for (auto & student :students) {
        if(student.getrollnum()==rollNumber) {
            cout<<"\t\t--------Student Found ------------"<<endl;
            student.displayRecords();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "\t\tScholar with roll number " << rollNumber << " is not found." << endl;
    }
}
void updateScholar(vector<Student>& students) {
    string upname;
    int select;
    cout<<"\t\tEnter Name to Update Record :";
    cin.ignore();
    getline(cin,upname);
    for (auto &student :students) {
        if(student.getName()==upname) {

            const string CYAN = "\033[36m";
            const string GREEN = "\033[32m";
            const string YELLOW = "\033[33m";
            const string MAGENTA = "\033[35m";
            const string BLUE = "\033[34m";
            const string RESET = "\033[0m";

            cout << CYAN << "\t\t--- Scholar Located ---" << RESET << endl;
            cout << GREEN << "\t\t 1. Modify Roll Number" << RESET << endl;
            cout << YELLOW << "\t\t 2. Modify Full Name" << RESET << endl;
            cout << MAGENTA << "\t\t 3. Modify Age" << RESET << endl;
            cout << BLUE << "\t\t 4. Modify All Details" << RESET << endl;
            cout << CYAN << "\t\tPlease select an option (number only):" << RESET;

            cin >> select;
            switch (select) {
                case 1: {
                    int rno;
                    cout << "\t\tEnter New Roll Number for Student" <<upname<< " : ";
                    cin >> rno;
                    student.setRollno(rno);
                    cout << "\t\t--- Updated Scholar Details ---" << endl;
                    student.displayRecords();
                    break;
                }
                case 2: {
                    string name;
                    cout << "\t\tEnter New Full Name: ";
                    cin.ignore();
                    getline(cin, name);
                    student.setName(name);
                    cout << "\t\t--- Updated Scholar Details ---" << endl;
                    student.displayRecords();
                    break;
                }
                case 3: {
                    int age;
                    cout << "\t\tEnter New Age for "<<upname<< " : ";
                    cin >> age;
                    student.setAge(age);
                    cout << "\t\t--- Updated Scholar Details ---" << endl;
                    student.displayRecords();
                    break;
                }
                case 4: {
                    int rno;
                    string name;
                    int age;
                    cout << "\t\tEnter New Roll Number: ";
                    cin >> rno;
                    cout << "\t\tEnter New Full Name: ";
                    cin.ignore();
                    getline(cin, name);
                    cout << "\t\tEnter New Age: ";
                    cin >> age;
                    student.setRollno(rno);
                    student.setName(name);
                    student.setAge(age);

                    cout << "\t\tAll details have been successfully updated." << endl;
                    cout << "\t\t--- Updated Scholar Details ---" << endl;
                    student.displayRecords();
                    break;
                }
                default:
                    cout << "\t\tInvalid selection. Please try again." << endl;
            }


        }
    }

}
void deleteScholar(vector<Student>& students) {
    string name;
    cout<<"Enter Scholar's Name to Delete :";
    cin.ignore();
    getline(cin,name);

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->getName() == name) {
            students.erase(it);
            cout << "Scholar " << name << " has been successfully deleted." << endl;
            return;
        }
    }
    cout << "No scholar found with the name " << name << "." << endl;

}


int main() {
    char iter;
    const string RESET = "\033[0m";
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string MAGENTA = "\033[35m";
    const string CYAN = "\033[36m";
    vector<Student> students;
    students.emplace_back(0,"user",0);
    do {
        system("clear");

        int option;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << GREEN << "\t\t\t\t\t|   Student Management        |" << RESET << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << BLUE << "\t\t\t\t\t| 1. Add New Student          |" << RESET << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << RED << "\t\t\t\t\t| 2. Display All Students     |" << RESET << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << GREEN << "\t\t\t\t\t| 3. Search for a Student     |" << RESET << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << BLUE << "\t\t\t\t\t| 4. Update Student Info      |" << RESET << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << RED << "\t\t\t\t\t| 5. Delete Student Record    |" << RESET << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout << GREEN << "\t\t\t\t\t| 6. Exit                     |" << RESET << endl;
        cout << CYAN << "\t\t\t\t\t+-----------------------------+" << RESET << endl;
        cout <<GREEN << "\tPlease Enter Your Choice: "<<RESET;
        cin>>option;

        switch(option) {
            case 1:
                addNewScholar(students);
            break;
            case 2:
                DisplayAllScholars(students);
            break;
            case 3:
                SearchScholar(students);
            break;
            case 4:
                updateScholar(students);
            break;
            case 5:
                deleteScholar(students);
            break;
            case 6:
                exit(1);
            default:
                cout << "\t\tInvalid Number " << endl;
        }


        cout<<"\t\tDo You Want to Continue [Yes/No] ? :";
        cin>>iter;

    }while(iter == 'y'||iter=='Y');



}