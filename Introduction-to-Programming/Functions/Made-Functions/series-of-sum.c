/*Series Sum Using Function Variants
Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 
using a function.

Expected Output :

The sum of the series is : 34*/
#include <stdio.h>

int series(int);

int main(){
    int n;
    
    printf("n = ");
    scanf("%d", &n);
    
    series(n);
    return 0;
}

int series(int num){
    int i;
    int division;
    int factorial=1;
    int sum=0;
    
    for(i = 1; i <= num; i ++){
        factorial = i * factorial;
        division = factorial/i;
        // printf("%d ", factorial);
        // printf("%d ", division);
        sum= sum+division;
    }
    printf("Sum is: %d", sum);
    
    
}
