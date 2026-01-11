/*Write a C program that takes 5 elements from the user into an integer array, then you need to 
print the table for each value using loops. */
#include <stdio.h>

int main(){
    int arr[5];
    int i, j;
    for(i = 0; i < 5; i++){
        printf("%d element is: ", i+1);
        scanf("%d", &arr[i]);
      for(j = 1; j <= 10; j++){
          printf("%d x %d = %d\n", arr[i], j, arr[i]*j);
      }  

    }

    return 0;
}
