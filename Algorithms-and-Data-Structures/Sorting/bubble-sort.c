/* Write a program that takes 10 elements from user in
 a array of integers then bubble sort to sort in descending order.*/

#include <stdio.h>

void bubbleSort(int arr[], int size){
    for(int step = 0; step < size-1; step++){

        for(int i = 0; i < size - step - 1; i++){
            if(arr[i] < arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        printf("Enter %d element: \n", i);
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr,size);

    for(int i=0; i <10; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}