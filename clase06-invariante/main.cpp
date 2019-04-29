#include <iostream>
#include "ejercicios.h"

using namespace std;

int main() {
    vector <int> a =  {2, 3, 1, 6, 1, 6};
    vector <int> b =  {2, 4, 5, 7, 9};

    cout << "Indice donde esta el minimo de la sub: "<< indice_min_subsec(a,1,5) << endl;
    cout << "Sumatoria: " << sumatoria(b) << endl;
    cout << "MCD: " << mcd(5,0) << endl;
    cout << "Division: " << division(13,5).first << " " << division(13,5).second << endl;
    cout << "Picos: " << existePico({5,7,4}) << endl;
    ordenar(b);
    mostrarVector(b);
    return 0;
}