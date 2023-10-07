#include <iostream>
#include "SparseMatrix.h"
using namespace std;

int main()
{
    int matrix[6][6] = {
        {15,  0,  0, 22,  0,-15},
        { 0, 11,  3,  0,  0,  0},
        { 0,  0,  0, -6,  0,  0},
        { 0,  0,  0,  0,  0,  0},
        {91,  0,  0,  0,  0,  0},
        { 0,  0, 28,  0,  0,  0}
    };
    SparseMatrix m(6,6,18);

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            if (matrix[i][j] != 0) {
                m.setvalue(i, j, matrix[i][j]);
            }
    
    cout << m.toString() << endl;
    cout << m.Transpose().toString() << endl;
    cout << m.FastTranspose().toString() << endl;
    cout << m.Multiply(m).toString() << endl;
 }