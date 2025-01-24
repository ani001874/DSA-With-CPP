#include "Matrix.h"
#include <iostream>
#include <vector>
using namespace std;




  vector<vector<int>> Matrix::transpose(vector<vector<int>> &mat) {

    int r = mat[0].size();
    int c = mat.size();

    vector<vector<int>> result(r,vector<int>(c));
    for (int i = 0;i<r;i++) {
        for(int j=0;j<c;j++) {
           result[i][j] = mat[j][i];
        }
    }

    return result;

  };

    
    
