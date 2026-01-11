/* Exercise 1: Display Value Change Through Pointers

Problem Description:
Write a C program that declares an integer variable and a pointer.
The program should:
1. Store the address of the integer in the pointer.
2. Change the value of the integer using the pointer (indirect access).
3. Print the value before and after modification to demonstrate the effect of the pointer.
*/

#include <stdio.h>

int main() {
    int var;
    int *ptrvar = &var;
    
    var = 20;
    int original = var;
    
    // Changing the value indirectly via the pointer
    *ptrvar = 50;
    
    printf("Variable value before change: %d\n", original);
    printf("Variable value after change (via pointer): %d\n", *ptrvar);
    
    return 0;
}