/*
Write a program that takes 15 elements from the user 
in an array and then just displays them on the screen in reverse order.
*/

#include <stdio.h>

int main(){
    int arr[15];
    
    int i;
    for(i = 0; i < 15; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 14; i >= 0; i--){
        printf("Elements: %d\n", arr[i]);
    }
    
    
    return 0;
}
