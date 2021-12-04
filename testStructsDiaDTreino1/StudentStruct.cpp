#include "StudentStruct.h"

Student addStudent(Student &student, int id){
    student.name = "name test one";
    student.id++;
    return student;
}
Class addClazz(Class clazz){
    std::cout<<clazz.students<<std::endl;
    return clazz;
}
void test(){

}