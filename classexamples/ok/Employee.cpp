// Employee class member-function definitions.
#include <fmt/format.h>
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects 
Employee::Employee(std::string_view firstName, std::string_view lastName,
   const Date& birthDate, const Date& hireDate)
   : m_firstName{firstName}, m_lastName{lastName},
   m_birthDate{birthDate}, m_hireDate{hireDate} {
   // output Employee object to show when constructor is called
   std::cout << fmt::format("Employee object constructor: {} {}\n",
      m_firstName, m_lastName);
}

// gets string representation of an Employee object
std::string Employee::toString() const {
   return fmt::format("{}, {}  Hired: {}  Birthday: {}", m_lastName,
      m_firstName, m_hireDate.toString(), m_birthDate.toString());
}

// output Employee object to show when its destructor is called
Employee::~Employee() {
   cout << fmt::format("Employee object destructor: {}, {}\n",
      m_lastName, m_firstName);
}


