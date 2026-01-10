/*Write a program that declares x=5, y=6, z=7 and then finds the
average of these 3 and displays it*/


#include <stdio.h>

int main(){

    float x=5;
    float y=6;
    float z=7;
    float average = (x + y + z)/3;

    printf("The average is: %.2f", average);

    return 0;
}
