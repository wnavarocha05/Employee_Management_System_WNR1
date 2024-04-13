// File name- employee_information.h
// Developer- Daviel Diaz
// Description- Class definition file for the employee information Class.
//----------------------------------------------------------------

#include "employee_information.h"

employee_information::employee_information() {

}

employee_information::employee_information(std::string name, int id, std::string dep, float pay) {
    this->_empName=name;
    this->_idNumber=id;
    this->_empDepartment=dep;
    this->_empPay=pay;

}

void employee_information::add_employee(std::string name,int id,std::string dep,float pay) {
    employee.push_back(employee_information(name,id,dep,pay));
}

void employee_information::remove_employee(std::string name) {
    for (auto it = employee.begin(); it != employee.end(); ++it) {
        if (it->_empName == name) {
            employee.erase(it);
            break;
        }
    }
}

void employee_information::display_employee() {
    for (const auto& employee : employee) {
        std::cout << "Name: " << employee._empName << std::endl;
        std::cout << "ID Number: " << employee._idNumber << std::endl;
        std::cout << "Department:" << employee._empDepartment << std::endl;
        std::cout << "Pay: " << employee._empPay << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }
}
;




