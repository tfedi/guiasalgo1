//#ifndef UNTITLED_MATRIX_UTILITIES_H
//#define UNTITLED_MATRIX_UTILITIES_H

#include<vector>
#include<iostream>

using namespace std;

template <class T>
void mostrarMatriz(vector<vector<T>> matriz){
    for(int i = 0; i < matriz.size(); i++){
        for(int j=0; j<matriz[i].size(); j++){
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
}

template <class T>
vector<vector<T>> init_matrix(int n, int m, T defaultValue){
    vector<T> row(m, defaultValue);
    vector<vector<T>> ret(n, row);
    return ret;
}

vector<vector<int>> rand_int_matrix(int n, int m){
    vector<vector<int>> ret;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            ret[i][j] = rand();
    return ret;
}



//#endif //UNTITLED_MATRIX_UTILITIES_H
