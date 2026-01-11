/*Nested Structures and Member Access
Demonstrate the use of nested structures by nesting an 'Address' structure 
inside a 'Person' (or Employee) structure. Show how to initialize these 
structures and access members using the dot operator.
*/
#include <stdio.h>

struct Adress{
    char name[10];
    int number;
};
struct Employee{
    char first_n[10];
    char last_n[10];
    struct Adress a;
};

int main(){
    struct Employee e[3]={
        {"Iulia", "Visan", "Street1", 10},
        {"Nataniel", "Dziadzia", "Street2", 20},
        {"Raluca", "Popescu", "Street3", 18}};

    int i;
    for(i = 0; i < 3; i++){
        printf("%d Employee:\nFirst name: %s, Last name: %s, Street name: %s, Street number: %d\n", i+1,e[i].first_n, e[i].last_n, e[i].a.name, e[i].a.number);
    }
    
    return 0;
}