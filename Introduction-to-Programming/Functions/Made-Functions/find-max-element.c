/*Exercise 1: Find the Maximum Element

Write a C program that:
Takes N integers from the user and stores them in an array.
Passes the array to a function findMax(int arr[], int n).
The function returns the largest number in the array.
The main function prints the maximum value.*/

#include <stdio.h>

int findMax(int arr[], int n);

int main(){
    int n;
    
    printf("How many elements do you want to store: ");
    scanf("%d", &n);
    int arr[n];
    
    int i;
    for(i = 0; i < n; i++){
        printf("Introduce element: ");
        scanf("%d", &arr[i]);
    }
    
    printf("The maximum value of the array is: %d", findMax(arr,n));
    // findMax(arr, n);
    
    return 0;
}

int findMax(int arr[], int n){

    int i;
    int max=0;
    
    for(i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    // printf("Max is: %d", max);
    return max;
}
