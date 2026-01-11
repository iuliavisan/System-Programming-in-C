/*Problem 
Write a C program that takes 5 elements from the user into an integer array, then you need to 
display the elements on the console using loops. */

#include <stdio.h>

int main(){
    int arr[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 5; i++){
        printf("The element is :%d\n", arr[i]);
    }
    
    return 0;
}
