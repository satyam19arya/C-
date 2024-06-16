#include <iostream>
using namespace std;
#include "65_emp.h"

int main() {
    Employee e;
    e.display();

    Employee e1(101, 10000);
    e1.display();
    return 0;
}

//  g++ -c .\66_emp_implementation.cpp  (creates 66_emp_implementation.o)
//  g++ .\66_emp_implementation.o .\64_header.cpp
//  .\a.exe