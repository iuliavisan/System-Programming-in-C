/*Write a C program that accepts the height of a person in centimeters and categorizes the person according to their height.
Test Data : 135
Expected Output :
The person is short.*/

#include <stdio.h>

int main(){
    
    int height;
    
    printf("Input height in cm: ");
    scanf("%d", &height);
    
    if(height>0){
        
    
    if(height<155){
        printf("The person is very short");
    }
    else if(height<=164){
        printf("The person is short");
    }
    else if(height<=174){
        printf("The person is average");
    }
    else if(height<=184){
        printf("The person is tall");
    }
    else if(height>184){
        printf("The person is very tall");
    }
    }
    else{
        printf("%d value is not a valid height", height);
    }
    
    return 0;
}
