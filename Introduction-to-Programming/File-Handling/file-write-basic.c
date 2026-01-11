/* Problem: C File I/O - Opening, Writing, and Closing a File
Write a C program that prompts the user for an integer. The program should 
open a file named "file.txt" in write mode, handle any potential errors during 
opening, write the integer to the file using fprintf(), and properly close 
the file using fclose().
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptrf;
    
    int n;
    printf("Enter an integer to write to file: ");
    scanf("%d", &n);
    
    // Opening file in write mode
    ptrf = fopen("file.txt", "w");
    
    if(ptrf == NULL){
        printf("Error: Could not open file.");
        return 1;
    }
    
    // Writing the integer to the file
    fprintf(ptrf, "%d", n);
    
    // Closing the file to save changes
    fclose(ptrf);
    
    return 0;
}