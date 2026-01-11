/*Calculate Average of Array
Write a C program that:
Inputs 5 floating-point numbers into an array.
Passes the array to a function float getAverage(float arr[], int n).
The function calculates and returns the average of all elements.
The main function displays the average up to 2 decimal places.*/

#include <stdio.h>

float getAverage(float arr[], int n);

int main(){
    int n = 5;

    float arr[n];
    
    int i;
    for(i = 0; i < n; i++){
        printf("Enter %d element: ", i+1);
        scanf("%f", &arr[i]);
    }
    
    printf("Average of the array is: %.2f", getAverage(arr, n));
    
    return 0;
}

float getAverage(float arr[], int n){
    int sum = 0;
    int count = 0;
    float average = 0;
    int i;
    
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
        count++;
    }
    average = sum / count;
    
    printf("\ncount is: %d\n", count);
    printf("sum is: %d\n", sum);
    printf("average is: %.2f\n", average);
    
    return average;
}
