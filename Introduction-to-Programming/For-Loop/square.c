#include <stdio.h>

int main(){
    int n;
    int square=0;
    int sum=0;
    
    printf("Input the number of terms: ");
    scanf("%d", &n);
    
    printf("The squares up to %d terms are: ", n);
    for(int i = 1; i<=n; i++){
        // printf("i is: %d\n", i);
        square = i * i;
        printf("%d ", square);
        sum = sum + square;
        // printf("Sum is: %d\n", sum);
    }
    printf("\n");

    printf("The sum of Square Natural Numbers up to %d terms is: %d\n", n, sum);
    return 0;
}
