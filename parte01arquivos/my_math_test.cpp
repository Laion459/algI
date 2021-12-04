#include "my_math_test.h"

 int findMinimum(const int number[], int size) {
    int minimum = 99999;
     for (int i = 0; i < size; i++) {
         if (number[i] < minimum){
             minimum = number[i];
         }
     }
     return minimum;
}