#include "testesObjetosEmC.h"

Matrix createMatrix(int rows, int cols) {
// validar rows e cols
    Matrix matrix = new MatrixData;
    matrix->rows = rows;
    matrix->cols = cols;
    int sizeInBytes = MAX_ROWS * MAX_COLS * sizeof(int);
    memset(matrix->elements, 0, sizeInBytes);
    return matrix;
}
int getMatrixElement(Matrix matrix, int row, int col) {
// validar se o objeto matrix foi alocado
    return matrix->elements[row][col];
}
void setMatrixElement(Matrix matrix, int row, int col, int value) {
// validar se o objeto matrix foi alocado
// validar se row e col estão dentro dos limites
    matrix->elements[row][col] = value;
}

void showMatrix(){
    Matrix matrix = createMatrix(3, 3);
    setMatrixElement(matrix, 0, 0, 1);
    setMatrixElement(matrix, 0, 1, 2);
    setMatrixElement(matrix, 0, 2, 3);

    setMatrixElement(matrix, 1, 0, 11);
    setMatrixElement(matrix, 1, 1, 22);
    setMatrixElement(matrix, 1, 2, 33);

    setMatrixElement(matrix, 2, 0, 100);
    setMatrixElement(matrix, 2, 1, 200);
    setMatrixElement(matrix, 2, 2, 300);

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            std::cout << getMatrixElement(matrix, row, col) << " ";
        }
        std::cout << std::endl;
    }
}
