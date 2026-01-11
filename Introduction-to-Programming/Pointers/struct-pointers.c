/* Problem: Accessing Structures via Pointers
Write a C program that defines a "STUDENT" structure with members: id, age, and marks. 
Create two student objects and two pointers to point to these objects. 
Use the pointers to take input from the user and display the stored data 
using pointer notation.
*/

#include <stdio.h>

struct Student{
    int id;
    int age;
    float marks;
};

int main(){
    struct Student s1, s2;
    struct Student *s1ptr, *s2ptr;
    
    s1ptr = &s1;
    s2ptr = &s2;
    
    printf("ID, age and marks of student1: ");
    scanf("%d %d %f", &s1ptr->id, &s1ptr->age, &s1ptr->marks);
    printf("ID, age and marks of student2: ");
    scanf("%d %d %f", &s2ptr->id, &s2ptr->age, &s2ptr->marks);
    
    // Note: The code below uses both dereferencing styles
    printf("ID, age and marks of student1: %d, %d, %.2f\n", (*s1ptr).id, (*s1ptr).age, (*s1ptr).marks);
    printf("ID, age and marks of student2: %d, %d, %.2f\n", s2ptr->id, s2ptr->age, s2ptr->marks);

    return 0;
}