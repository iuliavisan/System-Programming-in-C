/* Problem: Multiplication Table using Recursion
Write a C program that prints the multiplication table for the number 5 
using a recursive function.
*/

#include <stdio.h>

void multi(int n); 

int main(){
    multi(0); 
    return 0;
}

void multi(int i){
    if(i > 10){
        return; 
    }
    
    printf("5 * %d = %d\n", i, 5 * i);
    
    multi(i + 1);
}