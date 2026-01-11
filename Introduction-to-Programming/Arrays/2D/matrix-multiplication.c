/*Implement the Matrix Multiplication using 2-D Array. */

#include <stdio.h>

int main(){
    int row1, col1=0;
    int row2, col2=0;
    int i,j,k;
    
    printf("What's the size of the first array?\n");
    printf("rows = ");
    scanf("%d", &row1);
    printf("col = ");
    scanf("%d", &col1);
    
    printf("What's the size of the second array?\n");
    printf("rows = ");
    scanf("%d", &row2);
    printf("col = ");
    scanf("%d", &col2);
    
    int arr1[row1][col1];
    int arr2[row2][col2];
    
    
    if(col1 == row2){
    
    for(i = 0; i < row1; i++){
        for(j = 0; j < col1; j++){
            printf("First matrix: Enter your [%d][%d] element: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    
    for(i = 0; i < row2; i++){
        for(j=0; j < col2; j++){
            printf("Second matrix: Enter your [%d][%d] element: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    
    printf("First matrix is: \n");
    
    for(i = 0; i < row1; i++){
        for(j = 0; j < col1; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("Second matrix is: \n");
    
    for(i = 0; i < row2; i++){
        for(j = 0; j < col2; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    int result[row1][col2];
    int sum = 0;

    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            sum = 0;
            for (k = 0; k < col1; k++) {
                sum = sum + (arr1[i][k] * arr2[k][j]);
            }
            result[i][j] = sum;
        }
    }    
    
    printf("The multiplication matrix is: \n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
else{
    printf("Invalid");
}
}