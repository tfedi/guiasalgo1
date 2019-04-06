#include "ejercicios.h"

bool divide(vector<int> v, int n){
    for (int i : v)
        if (i % n != 0)
            return false;

    return true;
}


bool divideRec(vector<int> v, int n){
    if (v.empty())
        return true;
    else{
        if (v[v.size()-1] % n == 0){
            v.pop_back();
            return divideRec(v, n);
        }
        else
            return false;
    }
}

int maximo(vector<int> v){
    if (v.empty())
        return 0;

    int max;
    max = v[0];
    for (int i = 1; i < v.size() ; i++){
        if (v[i] > max)
            max = v[i];
    }
    return max;
}

int maximoRec(vector<int> v){
    if (v.empty())
        return 0;

    if (v.size() == 1)
        return v[0];

    if (v[v.size()-1] > v[v.size()-2])
        v[v.size()-2] = v[v.size()-1];

    v.pop_back();

    return maximoRec(v);
}

bool pertenece(int elem, vector<int> v){
    for(int x : v)
        if (x == elem)
            return true;

    return false;
}

bool perteneceRec(int elem, vector<int> v){
    if (v.empty())
        return false;

    else{
        if (v[v.size()-1] == elem){
            return true;
        }
        else{
            v.pop_back();
            return perteneceRec(elem, v);
        }
    }
}

void mostrarVector(vector<int> v){
    cout << "[";
    for (int i = 0; i < v.size()-1; i++)
        cout << v[i] << ",";

    cout << v[v.size()-1]<<  "]" << endl;
}

vector<int> limpiarDuplicados(vector<int> v){
    vector<int> res;

    for (int i : v)
        if(!pertenece(i, res))
            res.push_back(i);

    return res;
}

void desplazar(vector<int> &v){
    int aux;
    aux = v[0];
    for (int i = 1; i < v.size(); i++){
        v[i-1] = v[i];
    }
    v[v.size()-1] = aux;

}

vector<int> rotar(vector<int> v, int k){
    for (int i = 0; i < k ; i++)
        desplazar(v);

    return v;
}

vector<int> reverso(vector<int> v){
    vector<int> res;
    for(int i = v.size()-1; i >= 0; i--){
        res.push_back(v[i]);
    }
    return res;
}

bool esDivisor(int dividendo, int posibleDivisor){
    return dividendo % posibleDivisor == 0;
}

bool esPrimo(int n){
    for (int i = 2; i < n; i++)
        if (esDivisor(n,i))
            return false;

    return true;
}

vector<int> factoresPrimos(int n){
    vector<int> res;
    for (int i = 2; i <= n; i++)
        if (esDivisor(n,i) && esPrimo(i))
            res.push_back(i);
    return res;
}


bool estaOrdenado(vector<int> v){
    for (int i = 0; i < v.size()-1; i++)
        if(v[i] > v[i+1])
            return false;

    return true;
}

void negadorDeBooleanos(vector<bool> &booleanos){
    for (int i = 0; i < booleanos.size(); i++) {
        booleanos[i] = !booleanos[i];
    }
}

bool esImpar(int n){
    return !esDivisor(n,2);
}

void sinImpares(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
        v[i] = esImpar(v[i]) ? 0 : v[i];
}

vector<pair<int, int> > registrarAparicion (int n, vector<pair<int, int> > apariciones){
    for (pair <int,int> &aparicion: apariciones){
        if (aparicion.first == n){
            aparicion.second++;
            return apariciones;
        }
    }
    pair <int, int> nuevaAparicion;
    nuevaAparicion.first = n;
    nuevaAparicion.second = 1;
    apariciones.push_back(nuevaAparicion);
    return apariciones;
}

vector<pair<int, int> > cantidadApariciones(vector<int> v){
    vector<pair<int, int> > res;
    for (int i = 0; i < v.size(); i++) {
        res = registrarAparicion(v[i], res);
    }
    return res;
}

void mostrarApariciones(vector<pair<int, int> > apariciones){
    for (pair<int,int> aparicion : apariciones){
        cout << "(" << aparicion.first << "," << aparicion.second << ")" << endl;
    }
}


