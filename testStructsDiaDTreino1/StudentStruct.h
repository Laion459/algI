#pragma once
#include <iostream>
const int MAX_STUDENTS = 100;
void test();

struct Student{
    int id;
    std::string name;
};
struct Class{
    int idNext = 1;
    int numberOfStudents = 0;
    Student students[MAX_STUDENTS];
};
Student addStudent(Student &student, int id);
Class addClazz(Class clazz);