#include <stdio.h>
#include <stdbool.h>

typedef struct{
        char name[50];
        int age;
        float gpa;
        bool isFullTime;
    }Student;

void studentinfo(Student student);

int main(){

    Student student1 = {"Spongebob", 20, 3.5, true};
    studentinfo(student1);
    
    return 0;
}
void studentinfo(Student student){
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", student.isFullTime ? "Yes" : "No");
}