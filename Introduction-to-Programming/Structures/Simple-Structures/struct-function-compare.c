/* Problem: Passing Structures to Functions
Write a program that defines a "STUDENT" structure with members: id, age, and marks. 
Populate two student objects with data. Pass both objects to a function that compares 
their marks and displays the data of the student who achieved the higher score.
*/

#include <stdio.h>

struct Student{
    int id;
    int age;
    float marks;
};

void max_marks(struct Student s1, struct Student s2);

int main(){
    struct Student s1,s2;
    
    printf("Id, age and marks of s1: ");
    scanf("%d %d %f", &s1.id, &s1.age, &s1.marks);
    printf("Id, age and marks of s2: ");
    scanf("%d %d %f", &s2.id, &s2.age, &s2.marks);
    
    max_marks(s1,s2);
    
    return 0;
}

void max_marks(struct Student s1, struct Student s2){
    if(s1.marks > s2.marks)
        printf("Student 1 (id: %d, age: %d, marks: %.2f) has higher marks than student 2.\n", s1.id, s1.age, s1.marks);
    else
        printf("Student 2 (id: %d, age: %d, marks: %.2f) has higher marks than student 1.\n", s2.id, s2.age, s2.marks);
}