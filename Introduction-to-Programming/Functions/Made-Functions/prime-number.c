/*3. Prime Check Function Variants
Write a program in C to check whether a number is a prime number or not using the function.

Test Data :
Input a positive number : 5
Expected Output :

The number 5 is a prime number*/

#include <stdio.h>

void is_prime_number(int);

int main(){
    int n;
    
    printf("Enter your number: ");
    scanf("%d", &n);
    
    is_prime_number(n);
    
    return 0;
}

void is_prime_number(int num){
    int i;
    int flag;
    
    if(num == 1){
        printf("%d is not a prime number.\n", num);
    }
    else if(num == 0){
        printf("%d is not a prime number.\n", num);
    }
    else{
        
        for(i = 2; i <= num; i++){
            if(num % i == 0){
                printf("%d is divided by %d\n", num, i);
                flag++;
            }
            else
                continue;
        }
        
        if(flag >= 2)
            printf("%d is not a prime number.\n", num);
        else
            printf("%d is a prime number.\n", num);
    
    }
    
    
}
