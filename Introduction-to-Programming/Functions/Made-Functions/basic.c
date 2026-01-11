/* Write a program that creates a function named max that takes 
three numbers from the user and finds the maximum and shows on the output.*/

#include <stdio.h>

void max();

void main(){
    max();
    
}

void max(){
    int n1,n2,n3;
    printf("Enter the numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if(n1 > n2 && n1 > n3){
        printf("%d is the greatest number", n1);
    }
    else if(n2 > n1 && n2 > n3)
        printf("%d is the greatest number", n2);
    else
        printf("%d is the greatest number", n3);
}
