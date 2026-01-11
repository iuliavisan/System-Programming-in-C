/* Problem: Book Structure and Copying Methods
Write a program that defines a structure named "Book" with members: name, pages, and price. 
Create three objects (instances) and perform the following:
1. Input data from the user into the first object.
2. Perform "piece-meal copying" (member-by-member) to populate the second object.
3. Perform an "all-in-one" (direct assignment) to populate the third object.
Finally, display the information for all three objects.
*/

#include <stdio.h>
#include <string.h>

struct Book{
    char name[50];
    int pages;
    float price;
};

int main(){
    struct Book b[3];
    
    printf("Name, number of pages and the price for the first book: ");
    scanf("%s %d %f", b[0].name, &b[0].pages, &b[0].price);
    
    // Piece-meal copying
    strcpy(b[1].name, b[0].name);
    b[1].pages = b[0].pages;
    b[1].price = b[0].price;
    
    // All-in-one assignment
    b[2] = b[1];
    
    int i;
    for(i = 0; i<3; i++){
        printf("%d) Name: %s, Pages: %d, Price: %.2f\n", i+1,b[i].name, b[i].pages, b[i].price);
    }
    
    return 0;
}