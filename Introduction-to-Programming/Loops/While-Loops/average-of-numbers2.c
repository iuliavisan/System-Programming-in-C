/*Write a program that will calculate the average of n numbers. Input all number(s) from the user and display their average.

For example 
    
Enter limit of numbers= 2 
Enter number 1= 10 
Enter number 2= 10 Average of numbers = 10 */
#include <stdio.h>

int main(){
    float limit_of_numbers;
    float number;
    float average = 1;
    float sum = 0;
    
    printf("Enter a limit of numbers: ");
    scanf("%f", &limit_of_numbers);
    
    int i = 1;
    while(i <= limit_of_numbers){
        printf("Enter number %d = ", i);
        scanf("%.2f", &number);
        sum = sum + number;
        i++;
    }
    printf("Sum is %f\n", sum);
    average = sum / limit_of_numbers;
    printf("Average is %.2f\n", average);
    
    return 0;
}
