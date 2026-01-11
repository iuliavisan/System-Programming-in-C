/* Dynamic Memory for an Array of Structures

Problem Description:
Create a structure called "Employee" with the following fields: ID, salary, and department name. 
Dynamically allocate memory for an array of N employees based on user input, 
take the data, and print the results for all employees.
*/

#include <stdio.h>
#include <stdlib.h>

struct Employee{
    int id;
    float salary;
    char department[30];
};

int main(){
    struct Employee *ptr;
    int num_of_employees;
    
    printf("What is the number of employees?: ");
    scanf("%d", &num_of_employees);
    
    ptr=(struct Employee*)malloc(num_of_employees*sizeof(struct Employee));
    if(ptr == NULL){
        printf("Error");
        return 1;
    }
    
    int i;
    for(i = 0; i < num_of_employees; i++){
        printf("ID, salary and the department of the %d employee: ", i+1);
        scanf("%d %f %s", &ptr[i].id, &ptr[i].salary, ptr[i].department);
    }
    
    printf("Our employees are: \n");
    for(i = 0; i <num_of_employees; i++){
        printf("%d. ID: %.2d Salary: %.2f Department: %s\n", i+1,ptr[i].id, ptr[i].salary, ptr[i].department);
    }
    
    free(ptr);
    ptr=NULL;
return 0;
}