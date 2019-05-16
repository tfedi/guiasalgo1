#include <iostream>
#include "matrix_utilities.h"
#include "ejercicios.cpp"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    vector<vector<int>> Mat;
    vector<vector<int>> Mat2;

    Mat = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    Mat2 = {
            {1,2},
            {4,1},
            {5,1}
    };

    mostrarMatriz(Mat);
    transponer(Mat);
    cout << "\n";
    mostrarMatriz(Mat);
    cout << "\n";

    cout << productoVec({1,2,3},{1,2,3}) << endl;

    return 0;
}