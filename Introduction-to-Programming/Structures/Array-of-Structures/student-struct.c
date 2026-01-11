/* Array of Student Structures
Create an array of 5 Student structures. Implement a program to input and 
display all student records.
*/
#include <stdio.h>

struct Student{
    int id;
    char first_name[10];
    char last_name[10];
};

int main(){
    struct Student s[5];
    int i;
    
    for(i = 0; i<5; i++){
        printf("Id, first name and last name of student %d: ", i+1);
        scanf("%d %s %s", &s[i].id, &s[i].first_name, &s[i].last_name);
    }
    
    printf("Students enrolled: \n");
    
    for(i = 0; i<5; i++){
        printf("%d) ID: %d; First name: %s; Last name: %s\n", i+1, s[i].id, s[i].first_name, s[i].last_name);
    }
    
    return 0;
}