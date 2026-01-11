/* Problem: Basic String Input and Output
Write a C program that prompts the user to enter a string (without spaces). 
The program should store the input in a character array and display 
the string character by character using a loop.
*/

#include <stdio.h>

int main(){
    char name[10];
    printf("Enter the name: ");
    scanf("%s", name); // Corrected syntax: name is already an address
    
    int i=0;
    while(name[i] != '\0'){
        printf("%c", name[i]);
        i++;
    }
    
    return 0;
}