#include <iostream>
#include "ejercicios.h"

using namespace std;

int main() {

    cout << "A probar se ha dicho!" << endl;
    cout << "DIVIDE" << endl;


    vector<int> v;
    v.push_back(-20);
    v.push_back(30);
    v.push_back(40);
    vector<int> v2 = v;
    v2.push_back(3);

    cout << divideRec(v, 10) << endl;
    cout << divideRec(v2, 10) << endl;


    cout << "MAXIMO" << endl;
    cout << maximoRec(v) << endl;
    cout << maximoRec(v2) << endl;

    cout << "PERTENECE" << endl;
    cout << perteneceRec(10,v) << endl;
    cout << perteneceRec(30,v2) << endl;

    cout << "MOSTRAR ARRAY" << endl;
    mostrarVector(v);
    mostrarVector(v2);

    cout << "LIMPIAR DUPLICADOS" << endl;
    v = {1, 1, 2, 1, 1, 2, 3, 2, 3, 3};
    mostrarVector(limpiarDuplicados(v));

    cout << "ROTAR" << endl;
    v = {1, 2, 3, 4, 5, 6};
    mostrarVector(rotar(v,2));

    cout << "FACTORES PRIMOS" << endl;
    mostrarVector(factoresPrimos(6));

    cout << "ESTA ORDENADO" << endl;
    v = {1, 2, 3, 4, 5, 6};
    cout << estaOrdenado(v) << endl;

    cout << "SIN IMPARES" << endl;
    v = {1, 2, 3, 4, 5, 6};
    sinImpares(v);
    mostrarVector(v);

    cout << "CANTIDAD CARACTERES" << endl;
    v = { 1, 1, 2, 1, 1, 2, 3, 2, 3, 3};
    mostrarApariciones(cantidadApariciones(v));


    return 0;
}