#include <iostream>
using namespace std;
#include "64_emp.h"

int main() {
    Employee e;
    e.display();

    Employee e1(101, 10000);
    e1.display();
    return 0;
}

//  g++ -c .\65_emp_implementation.cpp  (creates 65_emp_implementation.o)
//  g++ .\65_emp_implementation.o .\63_header.cpp
//  .\a.exe