#include<vector>
using namespace std;
//
// Ej 39

vector<int> col(vector<vector<int>> matriz, int k){
    vector<int>column;
    for (int i = 0; i < matriz.size(); i++) {
        column.push_back(matriz[i][k]);
    }
    return column;
}

void swap (int & a, int & b) {
    int aux;
    aux = a;
    a = b;
    b = aux;
}

void transponer(vector<vector<int>> &matriz) {
    for (int i = 0; i < matriz.size() ; ++i) {
        for (int j = 0; j < i; ++j) {
            swap(matriz[i][j],matriz[j][i]);
        }
    }
}

/////
int productoVec(vector<int> vec1, vector<int> vec2){
    int sum = 0;
    for (int i = 0; i < vec1.size(); ++i) {
        sum = sum + (vec1[i] * vec2[i]);
    }
    return sum;
}

// Ej 40
vector<int> matrizPorIesimaFila(vector<vector<int>> matriz, int i){
    vector<int> res;
    for (int j = 0; j < matriz.size(); ++j) {
        res[i] = productoVec(matriz[j],matriz[i]);
    }
    return res;
}


//
//vector<vector<int>> matrizPorTranspuesta(vector<vector<int>> matriz){
//    //TODO: implementar
//    vector<vector<int>> ret;
//    return ret;
//}
//
//// Ej 41
//vector<vector<int>> redimensionar(vector<vector<int>> matriz, int n, int m){
//    //TODO: implementar
//    vector<vector<int>> ret;
//    return ret;
//}
//
//// Ej 42
//int contarPicos(vector<vector<int>> matrix){
//    //TODO: implementar
//    return 0;
//}
//
//
//// Ej 43
//char* estadoTaTeTi(vector<vector<int>> tablero){
//    //TODO: implementar
//    return "implementar";
//}
//
//// Ejercicios de terreno
//
//void elevar(vector<vector<int>> &terreno, int x){
//    //TODO: implementar
//}
//
//bool sobresalen(vector<vector<int>> terreno, int n, int& mts){
//    //TODO: implementar
//    return false;
//}
//
//tuple<int,int> resumen(vector<vector<int>> terreno){
//    //TODO: implementar
//    return make_pair(0,0);
//}
//
//int islas(vector<vector<int>> terreno){
//    //TODO: implementar
//    return 0;
//}
//
//// Ej 45
//vector<tuple<int, int, int>> aTriplas(vector<vector<int> > m){
//    //TODO: implementar
//    vector<tuple<int,int,int>> tripla;
//    return tripla;
//}
//
//// Ej 45
//vector<vector<int>> aMatriz(vector<tuple<int, int, int>> m){
//    //TODO: implementar
//    vector<vector<int>> ret;
//    return ret;
//}
// Ej 46

//iterativo: algunValle

//recursivo: valleMasProfundo

//recursivo: caminosAValles

//opcional iterativo: valleMasProfundo y caminosAValles

// Ej 47

// temperaturaPromedioPorPunto

// temperaturaPromedioPorMomento

