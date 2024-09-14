#include<stdio.h>
#include <stdlib.h>

//int = 4byte = 32bit = float, double = 8byte, char = 1 byte
// kieudulieu: longlong + bên trên
// Nhapxuat: scanf, printf
    // printf("%.2f", d); scanf("%f", d);
// Operator: +-*/%(Toán tử 2 ngôi) = /= *= += -=(Toán tử gán), ++--(Toán tử một ngôi), ==><>=<=!=(Toán tử quan hệ), &&||!(Toán tử logic)
// Hàm toán học: sqrt, pow, abs, cbrt, ceil, floor
// if else
// switch, case
    // switch (n){case 1:printf("31");break;case 2:printf("28");break;default:printf("Khong hop le");break;}
// mảng 1 chiều, 
// Xâu: is_lower, is_upper, is_alpha, is_digit, to_lower, to_upper, strlen(s)               char s[10];
//      strcmp(char a[], char b[]): So sánh 2 xâu   a>b => 1, a=b => 0
//      gets(s): Nhập vào, atoll: chuyển xâu(là ký tự số) sang số longlong
//      strrev(s): Đảo xâu, strlwr(s): strlower, strupr(s): strupper, strcpy(s, a): coppy nội dung của xâu a vào xâu s, strcat(s, a) Nối thêm xâu a vào xâu s


// FILE
// int main(){
//     FILE *fptr;

//     // // Open a file in writing mode
//     // fptr = fopen("filename.txt", "w");

//     // // Write some text to the file
//     // fprintf(fptr, "Hello World!");
//     // // Append some text to the file
//     // fprintf(fptr, "\nHi everybody!");

//     // Close the file
//     // Open a file in read mode
//     fptr = fopen("filename.txt", "r");
//     // Store the content of the file
//     char myString[100];

//     // Read the content and store it inside myString
//     fgets(myString, 100, fptr);

//     // Print the file content
//     printf("%s", myString);

//     // Close the file
//     fclose(fptr);
// }

// enum Level {
//   LOW = 1,
//   MEDIUM,
//   HIGH
// };

// int main() {
//   enum Level myVar = MEDIUM;

//   switch (myVar) {
//     case 1:
//       printf("Low Level");
//       break;
//     case 2:
//       printf("Medium level");
//       break;
//     case 3:
//       printf("High level");
//       break;
//   }
//   return 0;
// }


int main(){
    // int *ptr1 = malloc(size);
    // int *ptr2 = calloc(amount, size);
    // int *ptr2 = realloc(ptr1, size);
    int *ptr1, *ptr2;

    // Allocate memory
    ptr1 = malloc(4);

    // Attempt to resize the memory
    ptr2 = realloc(ptr1, 8);

    // Check whether realloc is able to resize the memory or not
    if (ptr2 == NULL) {
    // If reallocation fails
    printf("Failed. Unable to resize memory");
    } else {
    // If reallocation is sucessful
    printf("Success. 8 bytes reallocated at address %p \n", ptr2);
    ptr1 = ptr2;  // Update ptr1 to point to the newly allocated memory
    }

    // Free allocated memory
    free(ptr1);
}