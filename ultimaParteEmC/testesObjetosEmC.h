#pragma once
#include <iostream>
#include <cstring>


const int MAX_ROWS = 10;
const int MAX_COLS = 10;

struct MatrixData {
    int elements[MAX_ROWS][MAX_COLS];
    int rows = -1;
    int cols = -1;
};
typedef MatrixData* Matrix;


Matrix createMatrix(int rows, int cols);
int getMatrixElement(Matrix matrix, int row, int col);
void setMatrixElement(Matrix matrix, int row, int col, int value);

void showMatrix();