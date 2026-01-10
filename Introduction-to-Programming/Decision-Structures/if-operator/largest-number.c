/*Largest of Three Numbers

Write a C program to find the largest out of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12, 2nd Number = 25, 3rd Number = 52
The 3rd Number is the greatest among three*/

#include <stdio.h>

int main(){
    
    int num1;
    int num2;
    int num3;
    
    printf("num1= ");
    scanf("%d", &num1);
    printf("num2= ");
    scanf("%d", &num2);
    printf("num3= ");
    scanf("%d", &num3);
    
    if(num1>num2 && num1>num3){
        printf("%d is the biggest of the three", num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is the biggest of the three", num2);
    }
    else{
        printf("%d is the biggest of the three", num3);
    }
        
    
}
