/* Problem: Number Guessing Game (Do-While Loop)

Write a computer program to develop a secret number guessing game.

Game Logic:
- The user (or the system) sets a secret number stored in a variable called `secret_no`.
- The player is asked to guess the secret number repeatedly until the correct number is found.
- The player's input is stored in a variable called `guess_no`.

Feedback System:
- If the guess is incorrect, the program must provide one of the following hints:
    - “Guess a bigger number” (if the guess is too low).
    - “Guess a smaller number” (if the guess is too high).
- Once the user guesses correctly, the program should display: “You have won”.
- The program must also print the total number of attempts (guesses) the player took.

Technical Hint:
- Implement the repeated input logic using a `do-while` loop.
*/
#include <stdio.h>
#include<stdlib.h>
int main(){
int secret_no;
int guess_no;
int tries = 0;
secret_no = rand() %100;
do{
printf("Enter your guess no: ");
scanf("%d", &guess_no);
tries++;
if(guess_no == secret_no)
printf("Congratulations! You guessed the number in %d tries", tries);
else if(guess_no > secret_no)
printf("Try a smaller number\n");
else
printf("Try a bigger number\n");
}
while(guess_no != secret_no);
return 0;
}
