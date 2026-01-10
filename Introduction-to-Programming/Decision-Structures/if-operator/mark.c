/*Write a program that obtains marks in entry test. If obtained marks are greater than 80 then display 
“You can get admission in Fast” otherwise “Sorry you did not get admission. Please try next time”   
Note: Use if else without curly brackets. */

#include <stdio.h>

int main(){
    
    int mark;
    
    printf("Enter your mark: ");
    scanf("%d", &mark);
    
    if(mark > 80)
        printf("You can get admission fast");
    else
        printf("Sorry you didn't get the admission");
    
    
}
