/* Problem: Basic Structure Implementation
Write a program to demonstrate the use of a structure by storing and 
displaying the ID, age, and percentage of a single student.
*/

#include<stdio.h>

struct student
{
int id;
int age;
float perct;
};

void main()
{
struct student s;
s.age = 20;
s.id = 101;
s.perct = 98.0;
printf("Student Data :\n");
printf("ID is %d\nAge is %d\nPercentage is %f", s.id,s.age,s.perct);
}