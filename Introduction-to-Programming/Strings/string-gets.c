/* Problem: String Input with Spaces
Write a C program that accepts a string input from the user (allowing spaces). 
The program should use the gets() function to store the input and then 
print the string on the output using a loop.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char name[10];
    printf("Enter the name: ");
    gets(name);
    
    int i=0;
    while(name[i] != '\0'){
        printf("%c", name[i]);
        i++;
    }
    
    return 0;
}