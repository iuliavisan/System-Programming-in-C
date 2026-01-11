/*Structure-Based Calculations in Functions
Pass a 'Book' structure to a function to calculate and display a discounted 
price based on the original structure data.
*/
#include <stdio.h>

struct Book{
    int ID;
    float price;
};

void show_price(struct Book);

int main(){
    struct Book b = {110, 78.99};
    show_price(b);
    
    return 0;
}

void show_price(struct Book b){
    float initial_price = b.price;

    b.price = b.price - (50.0/100.0*b.price);
    printf("Book ID: %d\nPrice: %.2f\nDiscounted price: %.2f\n", b.ID, initial_price, b.price);
}