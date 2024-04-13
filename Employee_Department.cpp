// File - employee_department.cpp
// Dev - Wyatt Nava-Rocha
// Des - Definitions of declarations class
//----------------------------------------------------------------

#include "Employee_Department.h"

/**
*  Default constructor
*/

Employee_Departments::Employee_Departments() {

}


/**
* Property constructor
 * @param department - department name as text
 * @param name - employee name as text
 * @param id_number - employee id number as int
*/

Employee_Departments::Employee_Departments(std::string department, std::string name, int id_number){
    this->_empDepartment= department;
    this->_empNames= name;
    this->_idNumber= id_number;

}
