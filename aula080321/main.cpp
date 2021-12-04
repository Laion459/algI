#include <iostream>
#include <cstdlib>
#include <ctime>
int test(int intArray[]){
    std:: cout <<" Uma variavel int ocupa " << sizeof(int)<<" bytes "<< std::endl;
    std:: cout <<" Nosso array  ocupa " << sizeof(intArray)<<" bytes "<< std::endl;
    std:: cout <<" Nosso array tem  " << sizeof(intArray) / sizeof(int )<<" bytes "<< std::endl;
}
int getLength(int array){
    int numbers[10];
    int length = sizeof(numbers) / sizeof(int);
    int size = 0;
    numbers[size++] = 10;
    numbers[size++] = 20;
    std::cout << "length = " << length << std::endl;
    std::cout << "size = " << size << std::endl;
}
int tamanhoTipos(int test){
    std:: cout << sizeof(char)<<" char "<<std::endl;
    std:: cout << sizeof(bool )<<" bool "<<std::endl;
    std:: cout << sizeof(short)<<" short "<<std::endl;
    std:: cout << sizeof(int)<<" int "<<std::endl;
    std:: cout << sizeof(long )<<" long "<<std::endl;
    std:: cout << sizeof(long long )<<" long long "<<std::endl;
    std:: cout << sizeof(float)<<" float "<<std::endl;
    std:: cout << sizeof(double)<<" double "<<std::endl;
    std:: cout << sizeof(long double)<<" long double "<<std::endl;
}
void shortTest(short counter = 10){
    std::cout << "sizeof(counter) = " <<sizeof (counter) << " bytes" << std::endl;
    std::cout << "sizeof(&counter) = " << sizeof(&counter) << " bytes" << std::endl;
    counter = counter + 1;
    std::cout << "sizeof(counter) = " << sizeof(counter) << " bytes" << std::endl;
    std::cout << "sizeof(&counter) = " << sizeof(&counter) << " bytes" << std::endl;
}
void doubleTest(double counter = 10){
    std::cout << "sizeof(counter) = " <<sizeof (counter) << " bytes" << std::endl;
    std::cout << "sizeof(&counter) = " << sizeof(&counter) << " bytes" << std::endl;
    counter = counter + 1;
    std::cout << "sizeof(counter) = " << sizeof(counter) << " bytes" << std::endl;
    std::cout << "sizeof(&counter) = " << sizeof(&counter) << " bytes" << std::endl;
}
int calculateFactorial(int number){
    int factorial = 0;
    if (number == 0 || 1){
        factorial = 1;
    }
    while (number > 1){
        factorial *= number;
        number--;
    }
    return factorial;
}
void menu(){
    int intArray[5] = {0,2,5,8,1};
    int numbers[10];
    test(intArray);
    std:: cout << std::endl;
    getLength(numbers[10]);
    std:: cout << std::endl;
    tamanhoTipos(0);
    std:: cout << std::endl;
    shortTest();
    std:: cout << std::endl;
    doubleTest();
    std:: cout << std::endl;
    calculateFactorial(9);
}

void swap(int &x, int &y){
    int aux = x;
    x = y;
    y = aux;
}
void testSwap(){
    int a = 54;
    int b = 27;
    swap(a,b);
    std::cout << " ordenado = "<< a <<" "<< b <<std::endl;
}

void fillWithRandomNumbers(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        numbers[i] = rand();
    }
}
void testGetRandom() {
    int numbers[10];
    fillWithRandomNumbers(numbers, 10);
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << std::endl;
    }
}

void testArrayInMemoty(){
    int marks[3] = { 1, 2, 3 };
    std::cout << sizeof(marks) << std::endl;
    std::cout << sizeof(&marks) << std::endl;
    std::cout << &marks << std::endl;
    std::cout << &marks[0] << std::endl;
    std::cout << &marks[1] << std::endl;
    std::cout << &marks[2] << std::endl;
}
void testConst(){
#define WIDTH 80
#define LENGTH ( WIDTH + 10 )
    int numbers[WIDTH];
    std::cout << WIDTH << std::endl; //80
    std::cout << LENGTH + 20 << std::endl; // (80 + 10) + 20 = 110
    std::cout << sizeof(numbers) << std::endl; // 80 * 4 = 320
    std::cout<< " -------- "<<std::endl;
    const int MAX_ARRAY = 255;
    numbers[MAX_ARRAY];
    std::cout << MAX_ARRAY << std::endl;
    std::cout << sizeof(numbers) << std::endl;
}

//chamada dos testes
void novoMenu(){
    //menu();
    //testSwap();
    srand(time(NULL));
    //testGetRandom();
    //testArrayInMemoty();
    testConst();
}

//função principal
int main() {
    novoMenu();
    return 0;
}
