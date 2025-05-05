#include <stdlib.h>
#include <string.h>
#include "StrHashTable.h"
#include "alunos.h"




students_table* create_students_hash_table(){
    students_table* students;
    students = malloc(sizeof(students_table));
    for(int i = 0; i < MAX_TABLE_SIZE; i++){
        students->table[i] = NULL;
    }
    students->num_of_students = 0;
    return students;
}

int hash_student_name(char name[]){
    int name_value = 0, name_index;
    for(int i = 0; i < strlen(name); i++){
        name_value += name[i] * i;
    } 
    name_index = name_value % MAX_TABLE_SIZE;
    return name_index;
}

int insert_student_in_table(students_table* students, student* new_student){
    int student_index;
    student_index = hash_student_name(new_student->name);
    if(students->table[student_index] != NULL){
        return 0;
    }
    students->table[student_index] = new_student;
    students->num_of_students++;
    return 1;
}

student* search_student_in_table(students_table* students, char student_name[]){
    int student_index; 
    student* student_in_table;
    student_index = hash_student_name(student_name);
    student_in_table = students->table[student_index];
    if(student_in_table != NULL){
        if(strcmp(student_in_table->name, student_name) == 0){
            return student_in_table;
        }
    }
    return NULL; 
}






