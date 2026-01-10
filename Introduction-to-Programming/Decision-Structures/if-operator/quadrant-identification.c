/*Coordinate Quadrant Identification

Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
Test Data : 7 9
Expected Output :
The coordinate point (7,9) lies in the First quadrant.*/

#include <stdio.h>

int main(){
    
    float x;
    float y;
    
    printf("x= ");
    scanf("%f", &x);
    printf("y= ");
    scanf("%f", &y);
    
    if(x>0 && y>0){
        printf("(%.1f,%.1f) are in the first quadrant", x, y);
    }
    else if(x>0 && y<0){
        printf("(%.1f,%.1f) are in the fourth quadrant", x, y);
    }
    else if(x<0 && y<0){
        printf("(%.1f,%.1f) are in the third quadrant", x, y);
        }
    // else if(x<0 && y>0){
    else{
        printf("(%.1f,%.1f) are in the second quadrant", x, y);
    }
    
    return 0;
}
