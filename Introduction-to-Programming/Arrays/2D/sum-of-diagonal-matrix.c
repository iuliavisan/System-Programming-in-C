/*(2-D Array, Loops)                                                     
Write a C program  that creates a 4-by-4 Matrix by taking values from the user, 
you need to display the matrix on the screen and 
then you need to find the sum of its diagonal entries and display the sum on 
the console screen.*/
#include <stdio.h>

int main(){
    int arr[4][4];
    int sum = 0;
    int i, j;
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Enter [%d][%d] element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i = 0; i < 4; i++){
        for(j = 0; j <4 ; j++){
            printf("%d ", arr[i][j]);
            
            if(i == j){
                sum = sum + arr[i][j];
            }
        }
        printf("\n");
    }
    
    printf("The sum of the diagonal is: %d\n", sum);
    
    
    return 0;
}
