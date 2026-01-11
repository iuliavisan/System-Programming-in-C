/*(2-D Array, Loops)                                                     

Write a C program to create an Array of size 3 by 3 and take values from the user as input.
And display in the Matrix form. */
#include <stdio.h>

int main(){
    int arr[3][3];
    printf("Enter your values: ");
    
    int i,j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    printf("\n");
    }
    

    return 0;
}
