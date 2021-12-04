#pragma once
#include <string>
#include <iostream>

void testEmployee();
void testStudents();
void testListStudents();

struct Student {
    std::string id;
    std::string name;
    double m1;
    double m2;
    double m3;
};

struct State {
    std::string abbreviation;
    std::string name;
};

struct City {
    State state;
    std::string name;
};

struct Address {
    std::string street;
    City city;
};

struct Employee {
    long long id;
    std::string name;
    Address address;
};
