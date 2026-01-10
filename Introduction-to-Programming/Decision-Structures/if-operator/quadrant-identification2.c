/*Write a computer program that takes an angle between (0-360) from user and determines the exact 
quadrant of the angle in the Cartesian plan and also tell the state of both “X” and “Y” axis. 

For 
example, if user enter the 95O then is should display “II Quadrant on -XY Axis”. */

#include <stdio.h>

int main(){
    
    int angle;
    
    printf("How many degrees does your angle have?\n");
    scanf("%d", &angle);
    
    if(angle >=0 && angle <= 360){
        
        if(angle >= 0 && angle <= 90){
            printf("The angle %d is in the first quadrant on +x+y axis", angle);
        }
        else if(angle >90 && angle <= 180){
            printf("The angle %d is in the second quadrant on -x+y axis", angle);
        }
        else if(angle > 180 && angle <= 270){
            printf("The angle %d is in the third quadrant on -x-y axis", angle);
        }
        else
            printf("The angle %d is in the fourth quadrant on +x-y axis", angle);
    }
    else
        printf("Input value not valid");
    
    
    return 0;
}
