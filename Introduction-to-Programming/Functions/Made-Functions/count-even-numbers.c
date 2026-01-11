/*Count Even Numbers
Write a C program that:
Inputs an array of N integers.
Passes the array to a function countEven(int arr[], int size) which counts how many numbers are even.
The function should return this count.
The main function should print:
"Total even numbers = <count>". */

#include <stdio.h>

int countEven(int arr[], int size);

int main(){
    int n;
    
    printf("How many elements are in the array: ");
    scanf("%d", &n);
    int arr[n];
    
    int i;
    for(i = 0; i < n; i ++){
        printf("%d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    // for(i = 0; i < n; i ++){
    //     printf("%d ", arr[i]);
    // }
    printf("Total even numbers: %d", countEven(arr,n));
    return 0;
}

int countEven(int arr[], int size){
    int i;
    int count = 0; 
    
    for(i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}
