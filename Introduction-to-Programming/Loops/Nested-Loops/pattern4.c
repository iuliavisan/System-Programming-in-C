/*Write a program that prints the following patterns using nested loops. Take ‘n’ as input from the 
user and show n-lines of the sequence. 
1 
2 4 
3 6 9 
4 8 12 16 
. . . . . */
#include <stdio.h>

int main(){
    int n;
    int i,j;
    
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", i*j);
            }
        printf("\n");
        }
    
    
    return 0;
}
