/* Problem: Time Structure Calculations
Define a structure named "Time" with the following members: hours, minutes, and seconds. 
Write a C program to input two separate times, validate the input ranges, 
and display them in a proper time format.
*/

#include <stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
};

int main(){
    struct Time t[2];
    
    int i;
    for(i = 0; i < 2; i++){
        hours:
        printf("Enter the hour for the %d time: ", i+1);
        scanf("%d", &t[i].hours);
        if(t[i].hours > 24 || t[i].hours < 0){
            printf("Hours must be between 0 -> 24!\n");
            goto hours;
        }
            
        minutes:
        printf("Enter the minutes for the %d time: ", i+1);
        scanf("%d", &t[i].minutes);
        if(t[i].minutes > 60 || t[i].minutes < 0){
            printf("Minutes must be between 0 -> 60!\n");
            goto minutes;
        }

        seconds:
        printf("Enter the seconds for the %d time: ", i+1);
        scanf("%d", &t[i].seconds);
        if(t[i].seconds > 60 || t[i].seconds < 0){
            printf("Seconds must be between 0 -> 60!\n");
            goto seconds;
        }
    }

    for(i = 0; i < 2; i++){
        printf("The %d time is: \n%d : %d : %d\n", i+1,t[i].hours, t[i].minutes, t[i].seconds);
    }
    
    return 0;
}