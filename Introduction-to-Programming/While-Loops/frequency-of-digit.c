/*Write a simple C program using loops to find the frequency of each digit in a given integer */


#include <stdio.h>

int main(){
    int number;
    int digit = 0;
    int zero, one, two, three, four, five, six, seven, eight, nine;
    zero = one = two = three = four = five = six = seven = eight = nine = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while(number > 0){
        digit = number % 10;
            if(digit == 0)
                zero++;
            else if(digit == 1)
                one++;
            else if(digit == 2)
                two++;
            else if(digit == 3)
                three++;
            else if(digit == 4)
                four++;
            else if(digit == 5)
                five++;
            else if(digit == 6)
                six++;
            else if(digit == 7)
                seven++;
            else if(digit == 8)
                eight++;
            else    
                nine++;
                
        number = number / 10;
    }
    
    printf("The frequency of 0: %d\n", zero);
    printf("The frequency of 1: %d\n", one);
    printf("The frequency of 2: %d\n", two);
    printf("The frequency of 3: %d\n", three);
    printf("The frequency of 4: %d\n", four);
    printf("The frequency of 5: %d\n", five);
    printf("The frequency of 6: %d\n", six);
    printf("The frequency of 7: %d\n", seven);
    printf("The frequency of 8: %d\n", eight);
    printf("The frequency of 9: %d\n", nine);



    return 0;
}
