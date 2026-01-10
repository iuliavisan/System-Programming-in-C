/*Write a program that finds the even numbers up to a given number and add all the those even numbers*/

#include <stdio.h>

int main(){
    int number;
    int sum = 0;

    printf("Write a number: ");
    scanf("%d", &number);
    
    int i = 1;
    while(i < number){
        if(i % 2 == 0){
            printf("%d\n", i);
            sum = sum + i;
        }
        i++;
    }
    printf("The sum of the even numbers is: %d\n", sum);
    
    
    return 0;
}
