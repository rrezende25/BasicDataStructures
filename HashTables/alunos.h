#ifndef ALUNO_H
#define ALUNO_H


#define MAX_NAME_LEN 30

typedef struct student{
    char *name;
    int grade;
    struct student *next_student;
} student;


student* create_student(char name[], int grade);


#endif
