/*Problem (Nested Loops)                
Write a program that prints all the prime numbers in the range [min - max].  
Note: Where ‘min’ and ‘max’ are integers variables taken from the user.  */
  
#include <stdio.h>

int main(){
    
    int min;
    int max;
    int flag;

    printf("Enter the minimum and the maximum values: ");
    scanf("%d %d", &min, &max);

    while(min <= max){//checks if it's in the range
        for(int i = 1; i<= min; i++ ){//i is the nr we divide to to find nr of divisors
            if(min % i == 0){
                flag++;//one divisor found
            }
        }
            if(flag == 2){
            printf("%d ", min);
            }
    min++;
    flag = 0;
    }

        
return 0; 
}

