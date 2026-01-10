/*Write a program that inputs a number from the user and displays that number in a reversed order. 
Your entered number must be non-zero for example:*/

#include <stdio.h>

int main(){
    int number;
    int digit;
    int reversed_number = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    

        while(number > 0){
            digit = number % 10;
            printf("last digit: %d\n", digit);
            number = number / 10;
            printf("new number: %d\n\n", number);
            reversed_number = reversed_number*10 + digit;
        }
        printf("%d", reversed_number);
      
    
    
    return 0;
}
