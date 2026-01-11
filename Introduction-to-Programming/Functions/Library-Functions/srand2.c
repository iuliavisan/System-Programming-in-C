/*Random Number Guessing Game (Hard Mode)
Write a C program that:
Generates a random number between 1 and 100 using rand().
Gives the user unlimited attempts to guess it.
After each guess, the program prints:
“Too high”
“Too low”
When guessed correctly, show:
Number of attempts
“You Win!”

Use loops only (no functions for game logic)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number;
    int guess;
    int attempts=0;
    
    srand(time(NULL));
    number = rand() % 100 + 1;
    
    do 
  {
        printf("Enter your guess between 1 and 100: ");
        scanf("%d", &guess);
        attempts++;
        
        if(guess > number){
            printf("Too high!\n");
        }
        else if(guess < number){
            printf("Too low\n");
        }
        else{
            printf("You win! Number of attempts: %d.\n", attempts);
        }
    }while(guess != number);
    
    
    
}
