// File name- employee_information.h
// Developer- Daviel Diaz
// Description- Class declaration file for the Employee Information CLass.
//----------------------------------------------------------------




#ifndef EMPLOYEE_MANAGEMENT__SYSTEM_EMPLOYEE_INFORMATION_H
#define EMPLOYEE_MANAGEMENT__SYSTEM_EMPLOYEE_INFORMATION_H
#include <iostream>
#include <vector>
#include <algorithm>


class employee_information {
public:
    std::string _empName;
    int _idNumber;
    std::string _empDepartment;
    float _empPay;

    employee_information();

    employee_information(std::string name, int id,std::string dep,float pay);



    //Methods
    //----------------------------------------------------------------
    void add_employee(std::string name, int id, std::string dep, float pay);
    void remove_employee(std::string name);
    void display_employee();


private:
    std::vector<employee_information>employee;

};


#endif //EMPLOYEE_MANAGEMENT__SYSTEM_EMPLOYEE_INFORMATION_H
