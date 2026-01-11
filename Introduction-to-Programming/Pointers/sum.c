/* Write a program that creates two pointer for  two varibles then 
calculate the sum of these using pointers and show on the output.*/
#include <stdio.h>

int main(){
    int a, b, sum;
    sum = 0;
    
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    int *ptra = &a;
    int *ptrb = &b;
    
    sum = *ptra + *ptrb;
    printf("Sum is: %d\n", *ptra+*ptrb);
    
    return 0;
}
