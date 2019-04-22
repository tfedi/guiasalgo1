#include <iostream>
#include "ejercicios.h"
#include <math.h>
#include <cmath>

using namespace std;

/************* Ejercicio 1 *************/

// Decidir si un vector esta ordenado tanto ascendente como descendentemente
bool estaOrdenadoAsc(vector<int> v){
    int i=0;
    long int longitud = v.size();
    bool esMenor = true;
    while(i<=longitud-2 && esMenor){
        esMenor = v[i]<=v[i+1];
        i++;
    }
    return i==longitud-1;
}

bool estaOrdenadoDesc(vector<int> v){
    long int longitud = v.size();
    int i=0;
    bool esMayor = true;
    while(i<=longitud-2 && esMayor){ //longitud - 2 porque el v.size da la longitud real.
        esMayor = v[i]>=v[i+1];
        i++;
    }

    return i==longitud-1;
}

bool estaOrdenado(vector<int> v){
    long int longitud = v.size();
    if (longitud==0 || longitud==1)
        return true;
    else
        return estaOrdenadoDesc(v) || estaOrdenadoAsc(v);
}


/************* Ejercicio 2 *************/

// Decidir si un numero es primo.
bool esPrimo(int numero){
    //numero = abs(numero);
    if(numero>2) {
        int i=2;
        bool divide = false;
        while(i<numero && !divide){
            divide = numero%i == 0;
            i++;
        }
        return i==numero;
    }
    else if(numero==2)
        return true;
    else
        return false;
}

/************* Ejercicio 3 *************/

// Decidir si un elemento dado pertenece al vector.
bool pertenece(int elemento, vector<int> v){
    long int longitud = v.size();
    if(longitud==0){
        return false;
    }
    else {
        int i=0;
        bool sigo = true;
        while((i<longitud) && sigo){
            sigo = v[i]!=elemento;
            i++;
        }
        return !sigo;
    }
}

/************* Ejercicio 4 *************/

// Encontrar el desvio estandar de un vector de floats.
float promedio(vector<float> v){
    long int longitud = v.size();
    if(longitud == 0){
        return 0;
    }
    float suma=0;
    for(int i=0; i<=longitud-1; i++){
        suma = suma + v[i];
    }
    return suma/longitud;
}

float sumaDeCuadrados(vector<float> v){
    float sumadecuadrados=0;
    unsigned int i;
    for(i=0; i<=v.size()-1; i++){
        sumadecuadrados+=pow((v[i]-promedio(v)),2);
    }
    return sumadecuadrados;
}

float desvioEstandar(vector<float> v){
    return sqrt(sumaDeCuadrados(v)/v.size());
}


/************* Ejercicio 5 *************/

// Calcular el k-esimo numero de fibonacci
long fibonacci(int k){
    if(k==0)
        return 0;
    else if(k==1)
        return 1;
    else{
        long i=0;
        long j=1;
        long m;
        int nesimo;
        for(nesimo=1; nesimo<k; nesimo++){
            m = j;
            j = i + j;
            i = m;
        }
        return j;
    }
}

/************* Ejercicio 6 *************/

// Encontrar el maximo comun divisor de dos numeros
int maximo(int x, int y){
    if(x<0)
        x=-x;
    if(y<0)
        y=-y;
    if(x>y)
        return x;
    else
        return y;
}

int minimo(int x, int y){
    if(x<0)
        x=-x;
    if(y<0)
        y=-y;
    if(x<y)
        return x;
    else
        return y;
}

int maximoComunDivisor(int x, int y){
    if(x < 0){
        x = -1 * x;
    }
    if(y < 0){
        y = -1 * y;
    }
    int a = maximo(x,y);
    int b = minimo(x,y);
    int resto;
    while(b!=0 and b != 1){
        resto = a%b;
        a = b;
        b = resto;
    }
    if(b==0)
        return a;
    else
        return 1;
}

/************* Ejercicio 7 *************/

// Para un vector de enteros, calcular la sumatoria del doble de los elmentos positivos y pares.
int sumaDoble(vector<int> v){
    int suma=0;
    for(unsigned int i=0; i<v.size(); i++){
        if(v[i]%2==0 && v[i]>=0)
            suma =+ v[i]*2;
            i++;
    }
    return suma;
}

/************* Ejercicio 8 *************/

// Contar la cantidad de palabras que hay en un archivo de texto.
int cantPalabras(string filename) {
    ifstream miArchivo;
    string palabra;
    int cont = 0;

    miArchivo.open(filename.c_str(), ifstream::in);
    if(miArchivo.is_open()) {
        while(miArchivo.eof()) {
            miArchivo >> palabra;
            cont++;
        }
    }
    miArchivo.close();
    return cont;
}
