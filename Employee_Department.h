// File - employee_department.h
// Dev - Wyatt Nava-Rocha
// Desc - Declaration of departments class
//----------------------------------------------------------------

#ifndef EMPLOYEE_MANAGEMENT__SYSTEM_EMPLOYEE_DEPARTMENTS_H
#define EMPLOYEE_MANAGEMENT__SYSTEM_EMPLOYEE_DEPARTMENTS_H
#include <iostream>

class Employee_Departments {

public:

    // Constructors
    // -----------------------------------------------------------------------------
    Employee_Departments();
    Employee_Departments(std::string Department, std::string Names, int Number);

    // Accessors
    // ------------------------------------------------------------------------------
    std::string getDepartment() {return _empDepartment; }
    void setDepartment(std::string department) { _empDepartment = department;}

    std::string getNames() {return _empNames; }
    void setNames(std::string names) { _empNames = names;}

    int getidNumber() {return _idNumber; }
    void setidNumber(int id_number) { _idNumber = id_number; }

    //Methods
    //-------------------------------------------------------------------------------


private:
    std::string _empDepartment;
    std::string _empNames;
    int _idNumber;

};


#endif //EMPLOYEE_MANAGEMENT__SYSTEM_EMPLOYEE_DEPARTMENTS_H
