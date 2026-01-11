/*(2-D Array, Loops)                                                     
Write a C program to find a value in a 2D array and replace it with value = 5. 
Create Array of size 3 by 3 and take values from user as input. 
If the value is not found then it should be proper error handling.*/

#include <stdio.h>

int main(){
    int arr[3][3];
    int searched_el = 0;
    
    int i,j;
    
    for(i = 0; i < 3; i ++){
        for(j = 0; j<3; j++){
            printf("Enter [%d][%d] element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the searched element: ");
    scanf("%d", &searched_el);
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(searched_el == arr[i][j]){
                arr[i][j] = 5;
            }
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    

    
    return 0;
}
