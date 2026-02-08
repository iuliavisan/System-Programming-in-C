/* Write a program that 20 numbers from user sort it in ascending order
 using Bubble sort then apply selection sort to sort in descending order.*/

#include <stdio.h>

void bubbleSort(int arr[], int size){
    for(int step = 0; step < size-1; step++){

        for(int i = 0; i < size - step - 1; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
 }

 void selectionSort(int arr[], int size){
    for(int step = 0; step < size; step++){
        int min_idx = step;
        for(int i = step+1; i<size; i++){

            if(arr[i] > arr[min_idx]){
                min_idx = i;
            }

            swap(&arr[min_idx], &arr[step]);
        }
    }
 }  


int main(){
    int n;
    printf("Number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        printf("%d element is: ", i+1);
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);
    printf("\nThe array in ascending order is: ");
    
    for(int i=0; i <n; i ++){
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n);
    printf("\nThe array in descending order is: ");

    for(int i=0; i <n; i ++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    return 0;
}