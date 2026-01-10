/* Problem 5: (If - Else If - Else)

Write a computer program that calculates the income tax for different employees 
at an organization named “SpaceX”.

- If the employee is part of the Faculty, he/she is charged 4% of his/her salary as income tax.
- If the employee is part of the Management Staff, he/she is charged 3% of his/her salary as income tax.
- If the employee is an Attendant/Guard, he/she is charged 2% of his/her salary as income tax.

The program should prompt the user for their salary and department. It should then calculate the 
income tax and display both the income tax amount and the net salary (salary after tax) 
according to the employee's department.

Note: Use ‘F’ for Faculty, ‘M’ for Management Staff, and ‘A’ for Attendant/Guards.
*/

#include <stdio.h>

int main(){
    
    char department;
    float gross_salary;
    float tax;
    float nett_salary;
    
    
    
    printf("Please state your gross salary and your department(F-faculty, M-management, A-attendant/guards): ");
    scanf("%f %c", &gross_salary, &department);

    if(department == 'F'){
        tax = 0.04 * gross_salary;
        // nett_salary = gross_salary - tax;
        // printf("Gross salary: %.2f\nNett salary: %.2f\nTax income: %.2f\n", gross_salary, nett_salary, tax);
    }
    else if(department == 'M'){
        tax = 0.03 * gross_salary;
        // nett_salary = gross_salary - tax;
        // printf("Gross salary: %.2f\nNett salary: %.2f\nTax income: %.2f\n", gross_salary, nett_salary, tax);
    }
    else if(department == 'A'){
        tax = (float)2/100 * gross_salary;
        // nett_salary = gross_salary - tax;
        // printf("Gross salary: %.2f\nNett salary: %.2f\nTax income: %.2f\n", gross_salary, nett_salary, tax);
    }
    
    else
        printf("Input not valid");

    nett_salary = gross_salary - tax;
    printf("Gross salary: %.2f\nNett salary: %.2f\nTax income: %.2f\n", gross_salary, nett_salary, tax);
    return 0;
}
