/* Conditional Employee Display
Store information for N employees using a dynamically allocated array of structures. 
The program should display only those employees whose salary exceeds a given threshold.
*/
#include <stdio.h>
#include <stdlib.h>

struct Employees{
    int id;
    char department[20];
    float salary;
};

int main(){
    struct Employees *emp;
    int i,n;
    int given_value = 3400;
    
    printf("How many employees?: ");
    scanf("%d", &n);
    
    emp = (struct Employees*)malloc(n*sizeof(struct Employees));
    
    if(emp == NULL){
        printf("Error");
        return 1;
    }
    
    for(i = 0; i<n; i++){
        printf("Id, department and salary of employer %d: ", i+1);
        scanf("%d %s %f", &emp[i].id, emp[i].department, &emp[i].salary);
    }
    
    printf("The employers that earn more than %d$ are: \n", given_value);
    
    for(i = 0; i<n; i++){
        if(emp[i].salary > given_value){
            printf("Employer %d:\nID: %d\nDepartment: %s\nSalary: %.2f\n", i+1, emp[i].id, emp[i].department, emp[i].salary);
        }
    }
    free(emp);
    emp = NULL;
    
    return 0;
}