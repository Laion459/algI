
#include "test_my_math.h"

void testMyMath() {
    const int numbers[] = {20, 15, 30, 10};
    int size = 4;
    findMinimum(numbers,4);
    if (findMinimum(numbers,size) == 10){
        std::cout<<"passou"<<std::endl;
    }
}
