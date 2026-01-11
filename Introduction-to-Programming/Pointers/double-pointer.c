/* Exercise 2: Pointer-to-Pointer Demonstration

Problem Description:
Write a C program that declares an integer, a pointer to that integer, 
and a pointer to that pointer (int **).

The program should print the value of the integer using:
1. The variable itself.
2. The first pointer.
3. The pointer-to-pointer (double pointer).

Goal: Demonstrate how multiple levels of indirection work in C.
*/

#include <stdio.h>

int main() {
    int num;
    int *ptrnum = &num;
    int **ptr_ptrnum = &ptrnum;

    num = 17;

    printf("Value via variable: %d\n", num);
    printf("Value via *ptrnum: %d\n", *ptrnum);
    printf("Value via **ptr_ptrnum: %d\n", **ptr_ptrnum);

    return 0;
}