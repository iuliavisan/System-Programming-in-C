/* Problem: Student Structures and Average Calculation
Write a program that creates a 'student' struct with the following members: 
id, age, mark_perct, and grade. 
Store data for two students, display their information, and calculate 
the average percentage of both students.
*/

#include <stdio.h>

struct student{
    int id;
    int age;
    float mark_perct;
    char grade;
};

void main(){
    struct student s1, s2;
    s1.id = 110;
    s1.age = 18;
    s1.mark_perct = 95.20;
    s1.grade = 'A';
    s2.id = 112;
    s2.age = 19;
    s2.mark_perct = 88.70;
    s2.grade = 'B';
    
    printf("Student 1 data: \n");
    printf("%d\n%d\n%f\n%c\n", s1.id, s1.age, s1.mark_perct, s1.grade);
    
    printf("Student 2 data: \n");
    printf("%d\n%d\n%f\n%c\n", s2.id, s2.age, s2.mark_perct, s2.grade);
    
    printf("Average of the marks is = %f", (s1.mark_perct+s2.mark_perct)/2);
}