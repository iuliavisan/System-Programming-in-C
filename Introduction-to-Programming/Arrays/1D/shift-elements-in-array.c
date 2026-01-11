/* Write a C program that has an array of size 10;
you need to take 9 elements as an input from the user to fill the array and 
then print it out on the console screen. 

After that you need to take last element, and index number from the user then 
place the element at the appropriate position without overwriting any element. 
 
Note: You need to shift the elements to adjust the indexes of array. */
#include <stdio.h>

int main(){
    int arr[10];
    int index = 0;
    int barr[10];
    int temp;
    
    printf("Enter 9 elements of the array: \n");
    
    int i;
    for(i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Elements in the array are: ");
    for(i = 0; i < 9; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter your 10th element: ");
    scanf("%d", &temp);
    
    printf("Enter index: ");
    scanf("%d", &index);
    
    for(i = 0; i<index; i++){
        barr[i] = arr[i]; //copies the till the index
    }
    barr[index] = temp; //puts in the array the new element at desired index
    for(i = index + 1; i < 10; i++){
        barr[i] = arr[i - 1]; //copies the rest of the elements
    }
    
    
    printf("Elements in the array are: ");
    for(i = 0; i < 10; i++){
        printf("%d ", barr[i]);
    }
    
    
    
    return 0;
}
