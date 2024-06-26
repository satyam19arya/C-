#include <stdio.h>
#include <stdlib.h>

// Reading the contents from the file.
int main() {
  FILE *fptr;
  char ch;

  fptr = fopen("source.txt", "r");  // r (Read mode)
  if (fptr == NULL) {
    printf("File Not Found");
    return 0;
  }

  printf("File reading started..... \n");

  while ((ch = fgetc(fptr)) != EOF) {
    fputc(ch, stdout);
  }

  printf("\nFile reading done..... \n");

  fclose(fptr);
  return 0;
}
// // fopen - Opens the file.
// // fgetc - Reads a character from the file where the file pointer is pointing.
// // fputc - puts the character onto the console.
// // EOF - End of file.
// // fclose - Closes the file.


// // Example 2:
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   FILE *fptr1, *fptr2;
//   char ch;

//   fptr1 = fopen("source.txt", "r");
//   if (fptr1 == NULL) {
//     printf("File Not Found");
//     return 0;
//   }

//   fptr2 = fopen("destination.txt", "w");
//   if (fptr2 == NULL) {
//     printf("File Not Found");
//     return 0;
//   }

//   while ((ch = fgetc(fptr1)) != EOF) {
//     fputc(ch, fptr2);
//   }

//   printf("File copied successfully..... \n");

//   fclose(fptr1);
//   fclose(fptr2);
//   return 0;
// }


// Example 3:
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   FILE *fptr;
//   char ch;

//   fptr = fopen("source.txt", "r");
//   if (fptr == NULL) {
//     printf("File Not Found");
//     return 0;
//   }

//   fseek(fptr, 10, SEEK_SET);  // SEEK_SET - Start of the file.
//   printf("Current position of the file pointer = %ld, fgetc = %c\n", ftell(fptr), fgetc(fptr));

//   fseek(fptr, 5, SEEK_CUR);  // SEEK_CUR - Current position.
//   printf("Current position of the file pointer = %ld, fgetc = %c\n", ftell(fptr), fgetc(fptr));

//   fseek(fptr, -5, SEEK_END);  // SEEK_END - End of the file.
//   printf("Current position of the file pointer = %ld, fgetc = %c\n", ftell(fptr), fgetc(fptr));
  
//   return 0;
// }
// fseek - Moves the cursor from beginning (SEEK_SET), current position (SEEK_CUR), and end of the file (SEEK_END).
// ftell - Returns the current position of the cursor in the file.

// Types of files:
// Text files - Files that are readable by humans.
// Binary files - Files that are not readable by humans.

// modes: (Text files)
// r - Opens the file in read mode.
// w - Opens the file in write mode.
// a - Opens the file in append mode.
// r+ - Opens the file in read and write mode.
// w+ - Opens the file in write and read mode.
// a+ - Opens the file in append and read mode.

// modes: (Binary files)
// rb - Opens the file in read mode.
// wb - Opens the file in write mode.
// ab - Opens the file in append mode.
// rb+ - Opens the file in read and write mode.
// wb+ - Opens the file in write and read mode.
// ab+ - Opens the file in append and read mode.