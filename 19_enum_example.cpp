#include<stdio.h>
#include<stdlib.h>

enum Menu { 
    EXIT,
    ADD,
    SUB,
    MUL,
    DIV
};

int main() {
    int num1, num2;
    enum Menu choice;
    
    printf("Enter First number: ");
    scanf("%d", &num1);
    
    printf("Enter Second number: ");
    scanf("%d", &num2);

    do {
        printf("\nEnter Choice (0.EXIT 1.ADD 2.SUB 3.MUL 4.DIV): ");
        scanf("%d", &choice);

        switch (choice) {
            case ADD:
                printf("\nAddition = %d\n", num1 + num2);
                break;

            case SUB:
                printf("\nSubtraction = %d\n", num1 - num2);
                break;

            case MUL:
                printf("\nMultiplication = %d\n", num1 * num2);
                break;

            case DIV:
                if (num2 != 0)
                    printf("\nDivision = %d\n", num1 / num2);
                else
                    printf("\nError: Division by zero is not allowed.\n");
                break;

            case EXIT:
                printf("\nExiting the program.\n");
                break;

            default:
                printf("\nInvalid choice. Please enter a valid option.\n");
                break;
        }

    } while (choice != EXIT);
    
    return 0;
}

// switch case only works with integer values but here we are using enum values which are also integers.


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1, num2;
    int choice;

    printf("\n Enter Num1 value: ");
    scanf("%d", &num1);
    printf("\n Enter Num2 value: ");
    scanf("%d", &num2);

    do {
        printf("\n Enter choice: 0.Exit 1.ADD 2.SUB 3.MUL 4.DIV 5.MOD ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\n Addition = %d \n", num1 + num2);
                break;
            case 2:
                printf("\n Subtraction = %d \n", num1 - num2);
                break;
            case 3:
                printf("\n Multiplication = %d \n", num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                    printf("\n Division = %d \n", num1 / num2);
                else
                    printf("\n Error: Division by zero is not allowed.\n");
                break;
            case 5:
                if (num2 != 0)
                    printf("\n Modulus = %d \n", num1 % num2);
                else
                    printf("\n Error: Modulus by zero is not allowed.\n");
                break;
            case 0:
                printf("\n Exiting the program.\n");
                break;
            default:
                printf("\n Invalid choice. Please enter a valid option.\n");
                break;
        }
    } while(choice != 0);

    return 0;
}