#include <iostream>
#include <vector>
#include <utility>

using namespace std;

bool divide(vector<int> v, int n);
bool divideRec(vector<int> v, int n);

int maximo(vector<int> v);
int maximoRec(vector<int> v);

bool pertenece(int elem, vector<int> v);
bool perteneceRec(int elem, vector<int> v);

void mostrarVector(vector<int> v);

vector<int> limpiarDuplicados(vector<int> v);

vector<int> rotar(vector<int> v, int k);

vector<int> reverso(vector<int> v);
vector<int> reversoRec(vector<int> v);

vector<int> factoresPrimos(int n);

bool estaOrdenado(vector<int> v);

void negadorDeBooleanos(vector<bool>& booleanos);

void sinImpares(vector<int>& v);

vector<pair<int, int> > cantidadApariciones(vector<int> v);

void mostrarApariciones(vector<pair<int, int> > apariciones);
