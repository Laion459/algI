#include "Employee.h"

Student students[] = {
        {"12345", "John", 8.0, 7.5, 8.9},
        {"33212", "Mary", 8.5, 7.0, 9.0},
        {"45231", "Brian", 6.0, 7.6, 7.2}
};
void testListStudents(){
    for (int i = 0; i < 3; ++i) {
        std::cout << students[i].id << ", ";
        std::cout << students[i].name << ", ";
        std::cout << students[i].m1 << ", ";
        std::cout << students[i].m2 << ", ";
        std::cout << students[i].m3 << std::endl;
    }
}
