/*Write a program that will print the table of user's choice.  */

#include <stdio.h>

int main(){
    int number_of_table;
    int first_value;
    int last_value;
    
    
    printf("Enter the number of table: ");
    scanf("%d", &number_of_table);
    printf("Enter the first value of the table: ");
    scanf("%d", &first_value);
    printf("Enter the last value of the table: ");
    scanf("%d", &last_value);
    
    while(first_value <= last_value){
        printf("%d x %d = %d\n", number_of_table, first_value, number_of_table*first_value);
        
        first_value++;
    }
    
    
    return 0;
}
