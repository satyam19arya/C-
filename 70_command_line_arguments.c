#include <stdio.h>
#include<stdlib.h>

// int main(int argc, char *argv[], char *env[]) {
//     int i;
//     printf("Argument count = %d\n", argc);

//     for(i = 0; i < argc; i++) {
//         printf("argv[%d] = %s\n", i, argv[i]);
//     }
//     for(i = 0; i < 30; i++) {
//         printf("env[%d] = %s\n", i, env[i]);
//     }
//     return 0;
// }

// gcc .\70_command_line_arguments.c
// .\a.exe 1 2 3 4 5 6 7 8 9

// Example 2:
int main(int argc, char *argv[]) {
    int i;
    int sum = 0;
    for(i = 1; i < argc; i++) {
        sum = sum + atoi(argv[i]);
    }
    printf("Sum = %d", sum);

    return 0;
}
// argv is in string format so we need to convert it to integer using atoi() function