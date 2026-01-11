/* Problem: Book Structure Management
Create a structure named "Book" to store details such as title, author, and price. 
Write a C program to input details for three books, identify the most expensive 
and the lowest-priced books, and display their full information.
*/

#include <stdio.h>

struct Book{
    char title[50];
    char author[50];
    float price;
};

int main(){
    struct Book b[3];
    int i;
    int max_index=0;
    int min_index=0;
    
    for(i = 0; i < 3; i++){
        printf("Write the %d book's title: ", i+1);
        scanf("%s", b[i].title);
        printf("Write the %d book's author: ", i+1);
        scanf("%s", b[i].author);
        printf("Write the %d book's price: ", i+1);
        scanf("%f", &b[i].price);
        printf("\n");
    }
    
    printf("The most expensive book is: ");
    for(i = 0; i < 3; i++){
        if(b[i].price > b[max_index].price){
            max_index = i;
        }
    }
    printf("%s, %s: %.2f$\n", b[max_index].title, b[max_index].author, b[max_index].price);

    printf("The least expensive book is: ");
    for(i=0; i<3; i++){
       if(b[i].price < b[min_index].price){
            min_index = i;
        }
    }
    printf("%s, %s: %.2f$\n", b[min_index].title, b[min_index].author, b[min_index].price);
    
    return 0;
}