/*Passing Structure by Value
Write a function that accepts a Student structure as a parameter and 
prints its contents to the console.
*/
#include <stdio.h>

struct Student{
    int ID;
    char name[10];
    int age;
};

void show_student(struct Student);

int main(){
    struct Student s = {110, "Iulia", 23};
    show_student(s);
    
    return 0;
}

void show_student(struct Student s){
    printf("Student ID: %d\nName: %s\nAge: %d\n", s.ID, s.name, s.age);
}