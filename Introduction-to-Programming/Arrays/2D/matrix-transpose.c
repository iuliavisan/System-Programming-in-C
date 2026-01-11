/*(2-D Array, Loops)                                                      

Write a C program to take the transpose of a matrix (2D array of size 4 by 4). 
Sample Input: (Value Taken from User then Display Like This) 
| 1 2 2 2 | 
| 1 2 4 5 | 
| 1 2 5 3 | 
| 7 2 3 4 | 
Sample Output: 
| 1 1 1 7 | 
| 2 2 2 2 | 
| 2 4 5 3 | 
| 2 5 3 4 | */

#include <stdio.h>
int main(){
    int arr[4][4];
    
    int i,j;
    for(i = 0; i<4; i++){
        for(j = 0; j<4; j++){
            printf("Enter [%d][%d] element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Initial matrix: \n");
    for(i = 0; i<4; i++){
        for(j = 0; j<4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("Reversed matrix: \n");
    for(i = 0; i<4; i++){
        for(j = 0; j<4; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
