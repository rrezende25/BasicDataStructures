#include "alunos.h"
#include <stdlib.h>
#include <string.h>



student* create_student(char name[], int grade){
   student *new_student;
   new_student = malloc(sizeof(student));
   new_student->name = malloc(strlen(name) * sizeof(char));
   strcpy(new_student->name , name);
   new_student->grade = grade;
   new_student->next_student = NULL;
   return new_student;
}


void insert_student_in_list(student* first_student, student* new_student){
    student* current_student = first_student;
    while (current_student->next_student != NULL) {
        current_student = current_student->next_student; 
    }
    current_student->next_student = new_student;
}
