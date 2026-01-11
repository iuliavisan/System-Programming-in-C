/* Problem: Recursive Counting
Write a recursive function that counts from 0 to 20 but displays only the even numbers 
to show the first 10 even elements.
*/

#include <stdio.h>

void count_to_ten(int);
void main(){
    count_to_ten(0);
}

void count_to_ten(int count){
    if(count < 20){ //to have the first 10 elements
        if(count % 2 == 0){
            printf("%d ", count);
        }
        count_to_ten(count+1);
    }
}