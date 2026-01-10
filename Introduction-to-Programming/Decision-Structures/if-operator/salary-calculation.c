#include <stdio.h>

int main(){
    
    char gender;
    int years_of_service;
    char qualification;
    
    printf("Input your gender M/F: \nInput number of years of service: \nInput your qualification P(post-graduate)/G(graduate):\n");
    scanf("%c %d %c", &gender, &years_of_service, &qualification);
   
    if(gender == 'M'){
        if(years_of_service >= 10){
            if(qualification == 'P'){
                printf("Your salary is 15000");
            }
            else if(qualification == 'G'){
                printf("Your salary is 10000");
            }
        }
        else{
            if(qualification == 'P'){
                printf("Your salary is 10000");
                }
            else if(qualification == 'G'){
                printf("Your salary is 7000");
            }
            
        }
    }
    else if(gender == 'F'){
        if(years_of_service >= 10){
            if(qualification == 'P')
                printf("Your salary is 12000");
            else if(qualification == 'G')
                printf("Your salary is 9000");
        }
        else
            if(qualification == 'P')
                printf("Your salary is 10000");
            else if(qualification == 'G')
                printf("Your salary is 6000");
    }
    return 0;
}
