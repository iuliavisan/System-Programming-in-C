/*Write a program that performs all arithmetic operations on the
following 2 variables, and displays the result of each operation*/


#include <stdio.h>

int main(){

    int num1 = 15;
    int num2 = 20;

    printf("Sum is: %d\nSubtraction is: %d\nDivision is: %d\nMultiplication is: %d\nModulo is: %d", num1+num2, num1-num2, num1/num2, num1*num2, num1%num2);

    return 0;
}
