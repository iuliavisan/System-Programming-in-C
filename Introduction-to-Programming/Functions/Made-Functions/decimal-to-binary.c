/*Decimal to Binary Conversion Function Variants
Write a program in C to convert a decimal number to a binary number using a function.

Test Data :

Input any decimal number : 65

Expected Output :

The Binary value is : 1000001*/

#include <stdio.h>

void decimal_to_binary(int);

int main(){
    int num;
    
    printf("num = ");
    scanf("%d", &num);
    
    decimal_to_binary(num);
    
    return 0;
}

void decimal_to_binary(int n){
    int arr[50];
    int i = 0;
    int original = n;

    while(n > 0){
        arr[i] = n % 2;
        n = n / 2;
        i++;

    }
    printf("%d in binary is: ", original);
    
    int j;
    
    for(j = i - 1; j >= 0; j--){ //i-1 bc it's incremented even when we dont need it->garbage
        printf("%d", arr[j]);
    }
}
