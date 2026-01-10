/*Write a program in C to display n terms of natural numbers and their sum. 
Test Data: 7 
Expected Output: 
The first 7 natural number is: 
1 2 3 4 5 6 7 
The Sum of Natural Number up to 7 terms: 28*/

#include <stdio.h>

int main(){
    int n;
    int sum = 0;
    
    printf("Enter your number: ");
    scanf("%d", &n);
    
    printf("The first %d natural numbers are: ");
    int i = 1;
    while(i <= n){
        printf("%d ", i);
        sum = sum + i;
        i++;
    }
    printf("\nThe sum of number is: %d", sum);
    
    
    return 0;
}
