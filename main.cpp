#include <iostream>
#include <vector>
#include <algorithm>
#include "employee_information.h"
#include "Employee_Department.h"


int main() {
    employee_information employee;
    //Employee_Departments department;

    int choice,id;
    float pay;
    std::string name,dep;

    while (true) {
        std::cout << "Employee Management System" <<  std::endl;
        std::cout << "1. Add Employee Information" <<  std::endl;
        std::cout << "2. Remove Employee" <<  std::endl;
        std::cout << "3. Display Employee Information" <<  std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                std::cout << "Enter the name of the employee: ";
                getline( std::cin, name);
                std::cout << "Enter the employee Id: ";
                std::cin>>id;
                std::cin.ignore();
                std::cout<<"Enter the department: ";
                getline( std::cin, dep);
                std::cout<<"Enter the pay: ";
                std::cin>>pay;
                employee.add_employee(name,id,dep,pay);
                std::cout << "Employee added successfully!" <<  std::endl;
                break;
            case 2:
                std::cout << "Enter the employee name to remove: ";
                getline(std::cin, name);
                employee.remove_employee(name);
                std::cout << "Employee removed successfully!" << std::endl;
                break;
            case 3:
                std::cout << "All Employees: " << std::endl;
                employee.display_employee();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                exit(0);
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
        std::cout << std::endl;
    }



    return 0;
}
