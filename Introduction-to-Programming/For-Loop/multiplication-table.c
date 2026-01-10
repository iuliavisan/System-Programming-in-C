/* Write a program that prints the multiplication table
of 6 from 1 to 10 on the output.
6 x 1 = 6
6 x 2 = 12.......

6 x 10 = 60

*/
#include <stdio.h>

int main(){
    int i;
    for(i = 1; i <= 10; i++){
        printf("6 * %d = %d\n", i, 6*i);
    }
    
    
    return 0;
}
