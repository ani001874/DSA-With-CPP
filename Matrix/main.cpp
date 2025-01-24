#include "Matrix.h"



int main() {

    Matrix matrix1;

    vector<vector<int>> mat1 =  matrix1.input_matrix();
    cout << "Matrix 1: \n";
    matrix1.printMatrix(mat1);
    vector<vector<int>> transposeMtx = matrix1.transpose(mat1);
    cout << "Transposed Matrix: \n";
    matrix1.printMatrix(transposeMtx);
    

    return 0;
}