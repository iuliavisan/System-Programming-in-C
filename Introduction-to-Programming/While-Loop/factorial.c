/* Write a program that finds the factorial of a number using the
while loop.
4! = 4*3*2*1 = 24
*/




#include <stdio.h>

int main(){
    
    int i = 1;
    int factorial = 1;
    int number;
    
    printf("Write a number: \n");
    scanf("%d", &number);
    
    while(i <= number){
        factorial = factorial * i;
        i++;
    }
    
    printf("The factorial is %d\n", factorial);
    
    
    
    return 0;
}
