/* Problem: Nested Structures (Student and Exam)
Define a structure named "STUDENT" with members 'id' and 'age'. 
Define another structure named "EXAM" with a member 'marks' and a nested "STUDENT" object. 
Using the "EXAM" object, prompt the user to input data for all fields and display the 
output on the screen.
*/

#include <stdio.h>

struct Student{
    int id;
    int age;
};
struct Exam{
    float marks;
    struct Student s1;
};

int main(){
    struct Exam e1;
    printf("Write the marks, id and age of Student1: ");
    scanf("%f %d %d", &e1.marks, &e1.s1.id, &e1.s1.age);
    printf("ID: %d, age: %d, marks: %.2f\n", e1.s1.id, e1.s1.age, e1.marks);
    
    return 0;
}