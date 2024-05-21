// Fig. 9.25: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp.
#pragma once // prevent multiple inclusions of header
#include <string>
#include <string_view>
#include "Date.h" // include Date class definition

class Employee {
public:
   Employee(std::string_view firstName, std::string_view lastName,
      const Date& birthDate, const Date& hireDate);
   std::string toString() const;
   ~Employee(); // provided to confirm destruction order
private:
   std::string m_firstName; // composition: member object
   std::string m_lastName; // composition: member object
   Date m_birthDate; // composition: member object
   Date m_hireDate; // composition: member object
};

