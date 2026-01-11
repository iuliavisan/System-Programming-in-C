/*Maximum Price Search
Using an array of Book structures, identify and display the details of the 
book with the highest price.
*/
#include <stdio.h>
#include <stdlib.h>

struct Book{
    int id;
    char name[15];
    float price;
};

int main(){
    struct Book *b;
    int n,i;
    int max_index = 0;

    printf("How many books to be showed: ");
    scanf("%d", &n);
    
    b = (struct Book*)malloc(n * sizeof(struct Book));
    if(b == NULL){
        printf("Error");
        return 1;
    }
    
    for(i = 0; i < n; i++){
        printf("The ID, name and price of the %d book: ", i+1);
        scanf("%d %s %f", &b[i].id, &b[i].name, &b[i].price);
    }
    
    for(i = 0; i<n; i++){
        if(b[i].price > b[max_index].price){
            max_index = i;
        }
    }
    
    printf("The book with the maximum price is: \n");
    printf("ID: %.2d\nName: %s\nPrice: %.2f\n", b[max_index].id, b[max_index].name, b[max_index].price);
    
    free(b);
    b = NULL;
    
    return 0;
}