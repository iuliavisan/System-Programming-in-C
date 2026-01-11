/*Write a C program to initialize 200 random numbers using an array. Display all numbers with proper 
spaces and line break after 10 numbers*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[200];
    int i;
    for(i = 0; i < 200; i++){
        arr[i] = rand() % 10;
    }
    for(i = 0; i < 200; i++){
        if(i % 10 == 0){
            printf("\n");
        }
        printf("%d ", arr[i]);
        
    }
    
    
    return 0;
}
