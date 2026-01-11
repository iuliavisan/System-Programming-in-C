/* Exercise 3: Dynamic Memory Allocation for Car Data

Problem Description:
Define a structure called "Car" containing members for the model, year, and price. 
Implement two versions:
1. Dynamically allocate memory for an array of Car structures.
2. Dynamically allocate memory for the 'model' string within a single structure using malloc().
*/

// Version 1: Array of structures
#include <stdio.h>
#include <stdlib.h>

struct Car{
    char model[20];
    int year;
    float price;
};

int main(){
    struct Car *ptr;
    int no_of_cars;
    
    printf("How many cars: ");
    scanf("%d", &no_of_cars);
    
    ptr = (struct Car*)malloc(no_of_cars*sizeof(struct Car));
    if(ptr == NULL){
        printf("Error");
        return 1;
    }
    
    int i;
    for(i = 0; i < no_of_cars; i++){
        printf("The model, year and price for the %d car: ", i+1);
        scanf("%s %d %f", ptr[i].model, &ptr[i].year, &ptr[i].price);
    }
    
    printf("The cars: \n");
    for(i = 0; i < no_of_cars; i ++){
        printf("%d. Model: %s, year: %d, price: %.2f$\n", i+1, ptr[i].model, ptr[i].year, ptr[i].price);
    }
    
    free(ptr);
    ptr=NULL;
return 0;
}

// Version 2: Dynamic string inside structure
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car_v2 {
char *model; // dynamically allocated string
int year;
float price;
};

int main_v2() {
struct Car_v2 c;
// Allocate memory for model name
c.model = (char *)malloc(50 * sizeof(char));
if (c.model == NULL) {
printf("Memory allocation failed\n");
return 1;
}

// Assign values
strcpy(c.model, "Toyota Corolla");
c.year = 2022;
c.price = 4200000.50;

// Display details
printf("Model: %s\n", c.model);
printf("Year: %d\n", c.year);
printf("Price: %.2f\n", c.price);

// Free allocated memory
free(c.model);

return 0;
}