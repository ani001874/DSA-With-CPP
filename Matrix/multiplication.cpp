

#include <iostream>
#include <vector>

using namespace std;

void printMatrix (vector<vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void matrix_multiply(vector<vector<int>> &A, vector<vector<int>> &B,int rc)
{

    vector<vector<int>> result(2,vector<int>(3));

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for(int k = 0; k < rc; k++) {

                result[i][j] += A[i][k] * B[k][j];

            }
           
        }

        cout << endl;
    }

    cout << "Resultant Matrix: \n";
    printMatrix(result);
};

int main()
{

    vector<vector<int>> A(2,vector<int>(3));
    vector<vector<int>> B (3,vector<int>(2));

    A = {{2, 3, 7}, {-1, 5, 2}};
    B = {{3, 0}, {2, 5}, {-2, 7}};

    cout << "Matrix A: \n";
    printMatrix(A);

    cout << "Matrix B: \n";
    printMatrix(B);

    matrix_multiply(A, B,3);

    return 0;
}