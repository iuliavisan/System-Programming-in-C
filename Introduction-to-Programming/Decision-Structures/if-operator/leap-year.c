/* Write a program that takes a year from the user and
then finds whether that is a leap year or not.*/

#include <stdio.h>

int main(){
    

int year;

printf("Write a year: ");
scanf("%d", &year);

if(year%4!=0){
    printf("Not a leap year");
}
else{
    printf("Leap year");
}


return 0;
}
