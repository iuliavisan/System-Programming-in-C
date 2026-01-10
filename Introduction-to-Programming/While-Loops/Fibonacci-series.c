/*Write a program to print the first n terms of a Fibonacci series where ‘n’ is taken as an input by the user. A Fibonacci sequence is a sequence whose every term is the sum of its previous two terms.
Sample input: 8
Sample output: 0,1,1,2,3,5,8,13*/

#include <stdio.h>

int main(){
    int n;
    int term = 0;
    int new_term = 1;
    int sum = 0;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    int i = 0;
    while(i < n){
        printf("%d ", term);
        sum = term + new_term; //changing of places; sum is 3rd term
        term = new_term;
        new_term = sum;
        i++;
    }
    
    
    
    return 0;
}
