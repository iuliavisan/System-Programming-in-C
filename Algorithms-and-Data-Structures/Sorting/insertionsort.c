/* Write a program that takes 20 random elements in a array, then sort using the 
Insertion sort in both asending and descending order. */
#include <stdio.h>
#include <stdlib.h>

void insertionSortAsc(int arr[], int size){
    for(int step = 1; step < size; step ++){
        int key = arr[step];
        int j = step -1;

        while(j >= 0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void insertionSortDesc(int arr[], int size){
    for(int step = 1; step < size; step ++){
        int key = arr[step];
        int j = step -1;

        while(j >= 0 && key > arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int size = 20;
    int arr[size];
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 20;
    }

    insertionSortAsc(arr, size);
    printf("\nThe array in ascending order is: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");


    insertionSortDesc(arr, size);
    printf("\nThe array in descending order is: ");
    for(int i= 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}