#include <iostream>
using namespace std;
#include "65_emp.h"

Employee::Employee() {
    id = 0;
    salary = 0;
}

Employee::Employee(int id, int salary) {
    this->id = id;
    this->salary = salary;
}

void Employee::display() {
    cout << "Id: " << id << " Salary: " << salary << endl;
}