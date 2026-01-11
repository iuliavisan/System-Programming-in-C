/*Write the program using the nested loop to print the following pattern:
&&&&&&
&&&&&&
&&&&&& */
#include <stdio.h>

int main(){

int i, j;

for(i = 1; i <= 3; i++){
    for(j = 1; j <= 6; j++){
        printf("&");
    }
    printf("\n");
}


return 0;
}
