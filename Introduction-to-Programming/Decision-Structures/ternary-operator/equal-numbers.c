/* Write a program that takes two numbers from the user and
then finds whether both are equal OR not using the conditional operator.*/

#include <stdio.h>

int main(){
    
    int num1;
    int num2;
    
    printf("num1= ");
    scanf("%d", &num1);
    printf("num2= ");
    scanf("%d", &num2);
    
    (num1==num2) ? printf("Equal") : printf("Not equal");
}
