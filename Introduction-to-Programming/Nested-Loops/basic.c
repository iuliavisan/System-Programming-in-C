/*Problem:  (Nested Loops)  

Write a program that takes three numbers as an input from the user, namely N, p and r.  
The program calculates nPr . The formula to calculate nPr is: factorial_N/factorial_R */

#include <stdio.h>

int main(){
    int N;
    int r;
    int factorial_N = 1;
    int factorial_R = 1;
    
    
    printf("N = ");
    scanf("%d", &N);
    printf("r = ");
    scanf("%d", &r);
    
    int i = 1 ;
    while(i <= N){
        factorial_N = factorial_N * i;
        i++;
    }
    
    int j = 1;
    while(j <= N - r){
        factorial_R = factorial_R * j;
        j++;
    }
    
    printf("The result is: %d", factorial_N / factorial_R);
    
    return 0;
}
