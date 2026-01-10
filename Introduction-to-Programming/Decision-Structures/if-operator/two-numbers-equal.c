/* Write a program that takes two numbers from the user and finds whether they are equal OR not.*/

#include <stdio.h>

int main(){
    
int num1;
int num2;

printf("num1= ");
scanf("%d", &num1);
printf("num2= ");
scanf("%d", &num2);

if(num1==num2)
{
    printf("Equal numbers");
    
}
else{
    printf("Not equal numbers");
}

return 0;
}
