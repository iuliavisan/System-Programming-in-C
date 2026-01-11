#include <stdio.h>

void SquarePbyV(int);
void SquarePbyF(int*);

void main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    SquarePbyV(n);
    printf("Value from main: %d\n", n);
    
    SquarePbyF(&n);
    printf("Value from main: %d\n", n);
    
    SquarePbyF(&n);
    printf("Value from main: %d\n", n);
    
    SquarePbyV(n);
    printf("Value from main: %d\n", n);
}

void SquarePbyV(int x){
    x = x * x;
    printf("Value from function one: %d\n", x);
}

void SquarePbyF(int *x){
    *x = *x * *x;
    printf("Value from function two: %d\n", *x);
}
