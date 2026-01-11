/* Problem: File Copying (Read from one file and Write to another)
Write a C program that simulates a basic file copy operation for an integer.
The program should:
1. Open an existing file named "file1.txt" in read mode.
2. Read an integer value from this file using fscanf().
3. Close the first file.
4. Open a second file named "file2.txt" in write mode.
5. Write the previously read integer into this second file using fprintf().
6. Properly close the second file to ensure data is saved.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptrf1, *ptrf2;
    int num;
    
    // Opening the source file to read data
    ptrf1 = fopen("file1.txt", "r");
    
    if(ptrf1 == NULL){
        printf("Error: Could not open source file.");
        return 1;
    }

    fscanf(ptrf1, "%d", &num);
    printf("Value read from file1: %d", num);
    
    fclose(ptrf1);
    
    // Opening the destination file to write data
    ptrf2 = fopen("file2.txt", "w");
    
    if(ptrf2 == NULL){
        printf("Error: Could not open destination file.");
        return 1;
    }

    fprintf(ptrf2, "%d", num);
    
    fclose(ptrf2);
    
    return 0;
}