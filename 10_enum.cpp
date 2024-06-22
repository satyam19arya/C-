#include <bits/stdc++.h>
using namespace std;

// Defining enum Year
enum year {
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main() {
    for(int i = Jan; i <= Dec; i++)
        cout << i << " ";
    return 0;
}

// Example 2:
#include <stdio.h>

enum colors{
    RED = 5,
    GREEN = 10,
    BLUE
};

int main(void) {
    enum colors clr; // clr is called as enum variable of type enum colors

    clr = RED; // RED element of enum is accessed through enum variable 
    printf("value of clr = %d", clr);

    clr = GREEN;
    printf("\nvalue of clr = %d", clr);

    clr = BLUE;
    printf("\nvalue of clr = %d", clr);
    
    printf("\nGREEN = %d", GREEN);

    return 0;
}
// We can access enum elements directly using their name or using enum variable

// Example 3:
// #include <stdio.h>

// enum colors { RED = -1, GREEN, BLUE };

// int main(void) {
//     printf("RED = %d", RED);
//     printf("\nGreen = %d", GREEN);
//     printf("\nBlue = %d", BLUE);

//     printf("\nSize of enum = %d", sizeof(enum colors));
//     return 0;
// }

// Example 4:
// #include <stdio.h>

// enum colors { RED = 2, GREEN, BLUE };

// int main(void) {
//     // enum colors clr = (RED,GREEN,BLUE);
//     // printf("clr = %d", clr);
    
//     enum colors clr = RED,GREEN,BLUE;
//     printf("clr = %d", clr);
    
//     return 0;
// }

// Example 5:
#include <stdio.h>

typedef enum department{
    TCT, 
    ADMIN, 
    SECURITY, 
    PLACEMENT
} DEPT;
// `department` is the real name of the enum
// `DEPT` is a nickname given to the enum

int main(void) {
    enum department dpt_real; // dpt_real is a variable of type enum department created using real name
    DEPT dpt_nick_name;       // dpt_nick_name is a variable of type enum DEPT created using nickname

    dpt_real = TCT;
    printf("dpt_real = %d ", dpt_real);
    dpt_nick_name = ADMIN;
    printf("\ndpt_nick_name = %d \n", dpt_nick_name);

    return 0;
}

// Example 6:
#include <stdio.h>

enum { 
    MON, 
    TUE, 
    WED, 
    THUR, 
    FRI
}; // Anonymous enum

// We can access the elements of an anonymous enum using their name only as shown below

int main() {
    printf("Mon = %d \n", MON);
    return 0;
}

// Example 7:
#include <stdio.h>

typedef enum { 
    MON, 
    TUE, 
    WED, 
    THUR, 
    FRI
} Days; // Anonymous enum

int main() {
    printf("Mon = %d", MON);
    
    Days d; // d is a variable of type enum Days
    d = TUE;
    // TUE++; // Error: increment of read-only variable ‘TUE’
 
    printf("\nDays d = %d", d);
    return 0;
}

// Enum is a user-defined data type that consists of integral constants.
// The enum keyword is used to declare an enumeration.
// An enum is a special type that represents a group of constants (unchangeable values).
// Enum is used to improve the readability of the code.