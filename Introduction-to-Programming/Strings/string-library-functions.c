/* Problem: String Manipulations in C Using Library Functions
Write a C program to demonstrate the use of common string library functions 
including strlen() for length, strcpy() for copying, and strcmp() for 
string comparison. Display the results of each operation on the output.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char string1[10] = "Hello";
    char string2[20];
    char string3[10] = "Hello";
    char string4[10] = "Everyone";
    char string5[10] = "Hi";

    // Length of string1
    printf("%d\n", strlen(string1));
    
    // Copy string1 to string2
    strcpy(string2, string1);
    printf("%s\n", string2);
    
    // String comparisons
    printf("%d\n", strcmp(string4, string5));
    printf("%d\n", strcmp(string3, string4));
    
    return 0;
}