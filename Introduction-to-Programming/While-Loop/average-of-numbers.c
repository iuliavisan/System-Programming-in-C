/*Write a program that will calculate the average of n numbers. Input all number(s) from the user 
and display their average. 

For example 
Enter the limit of numbers= 2 
Enter number 1= 10 
Enter number 2= 10 
Average of numbers = 10 */

#include <stdio.h>

int main(){
    int limit_of_numbers;
    float average;
    int data;
    
    printf("Enter limit of numbers: ");
    scanf("%d", &limit_of_numbers);
    
    int i = 1;
    while(i <= limit_of_numbers){
        printf("Enter number %d = ", i);
        scanf("%d", &data);
        average = average + data;
        i++;
    }
    average = average / limit_of_numbers;
    printf("Average of numbers = %.2f", average);
    
    return 0;
}
