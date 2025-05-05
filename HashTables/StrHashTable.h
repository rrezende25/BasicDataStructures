#ifndef STRHASHTABLE_C
#define STRHASHTABLE_C

#include "alunos.h"

#define MAX_TABLE_SIZE 60

typedef struct student_hash_table{
    student* table[MAX_TABLE_SIZE];
    int num_of_students;
} students_table;

students_table* create_students_hash_table();
int hash_student_name(char name[]);
int insert_student_in_table(students_table* students, student* new_student);

#endif
