/*Write a C program to get n from the user and print Odd numbers and Even numbers separately using Loops till (n). 
Hint: You can use Modulus % operator for this task! */

#include <stdio.h>

int main(){
    int n;
    
    printf("Introduce your number: ");
    scanf("%d", &n);
    
    printf("Even numbers are: \n");
    int i = 1;
    while(i <= n){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    i++;
    }
    printf("\nOdd numbers are: \n");
    int j = 1;
    while(j <= n){
        if(j % 2 != 0){                 
            printf("%d ", j);
        }
    j++;
    }

    
    
    return 0;
}
