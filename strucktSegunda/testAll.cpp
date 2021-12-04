#include "testAll.h"

void testEmployee(){
    Employee add = {10, "Leonardo", "Onildo Lemos"," SC " };

    std::cout << add.id << std::endl;
    std::cout << add.name << std::endl;
    std::cout << add.address.street << std::endl;
    std::cout << add.address.city.name << std::endl;
    std::cout << add.address.city.state.abbreviation << std::endl;

}

void testStudents(){
    Student john = {"12345", "John", 8.0, 7.5, 8.9};

    std::cout << john.id << std::endl;
    std::cout << john.name << std::endl;
    std::cout << john.m1 << std::endl;
    std::cout << john.m2 << std::endl;
    std::cout << john.m3 << std::endl;

}