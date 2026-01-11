/* Write a program that will create a search function that takes an array of size 10, and an element to search inside and show if elements are found or not.*/
#include <stdio.h>

void search(int arr[], int x);

int main(){
    int arr[10];
    int searched_el;
    int i;
    for(i = 0; i<10; i++){
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the searched element: ");
    scanf("%d", &searched_el);
    
    search(arr, searched_el);
    
    return 0;
}

void search(int arr[], int x){
    int i;
    int flag = 0;
    
    for(i = 0; i < 10; i++){
        if(x == arr[i])
            flag = 1;
    }
    if(flag == 1)
        printf("Found.\n");
    else
        printf("Not found.\n");
}

