#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include <iostream>

using namespace std;

class Matrix {
private:
    std::vector<std::vector<int>> data;

public: 

    vector<vector<int>> transpose(vector<vector<int>> &mat1); 
    void printMatrix( vector<vector<int>> &mat) {
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }


    vector<vector<int>> input_matrix() {

        int rows, cols;
        cout << "Enter the number of rows:  " ;
        cin >> rows;
        cout << "Enter the number of columns:  " ;
        cin >> cols;

        vector<vector<int>> mat(rows, vector<int>(cols));
         
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                cin >> mat[i][j];
            }
        }

        return mat;
    }


};

#endif
