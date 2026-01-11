/*Write a program that finds the area and circumference of a circle using 2 functions:
area()
circumference().
The user inputs the radius of the circle r. */

//circle area: pi x r^2 
//circumference: 2pi x r 

#include <stdio.h>
#define pi 3.14159

int area(int);
int circumference(int);

void main(){
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    
    printf("Area is: %d", area(r));
    printf("The circumference is: %d", circumference(r));
    
}

int area(int r){
    return pi*(r*r);
}

int circumference(int r){
    return 2*pi*r;
}
