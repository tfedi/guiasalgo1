#include "ejercicios.h"
#include <iostream>

// Ejercicio 1
int indice_min_subsec(vector<int> v, int i, int j){
//    int minimoParcial = v[j-1];
//    int minimoIndice = j-1;
//    while(j>i-1){
//        if(minimoParcial >= v[i]){
//            minimoParcial = v[i];
//            minimoIndice = i;
//        }
//        i = i+1;
//    }
	int l = j;
	int res = j;
	while(l > i-1){
		if(v[l] <= v[res]){
			res = l;
		}
		l = l - 1;
	}
	return res;
}

// Ejercicio 2
int sumatoria(vector<int> v) {
	int suma = 0;
	int i = (int)((v.size())/2) + 1;
	int k = 1;
	while(k < i+1){
		suma = suma + v[i-k];
		if( (int)(v.size()/2) + k >= v.size() ){
			suma = suma + 0;
		}
		else{
			suma = suma + v[(int)(v.size()/2) + k];
		}
		k = k + 1;
	}
	return suma;
}

// Ejercicio 3
int mcd(int m, int n){
	int a=n,b=m;
	if(m > n){
		return mcd(b-a,b);
	}
	else if(m==n){
		return n;
	}else{
		return mcd(b,a);
	}
}

// Ejercicio 4
pair<int,int> division(int n, int d){
	int q=0,r=n;
	if(d == 0){
		return make_pair(0,0);
	}
	while(r>d){
		r = r-d;
		q = q + 1;
	}

	return make_pair(q,r);
}

// Ejercicio 5
bool existePico(vector<int> v){
	bool res = false;
	int i = 1;
	while(i < v.size()-1){
		if(v[i] > v[i-1] && v[i] > v[i+1]){
			res = true;
			break;
		}
		i = i + 1;
	}
	return res;
}

// Ejercicio 6
void swap(vector<int>& v, int i, int j){
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp; 
}

void ordenar(vector<int>& v){
	int i = 0;
	int minimoIndice;
	while(i < v.size()){
		minimoIndice = indice_min_subsec(v,i,v.size()-1);
		swap(v,i,minimoIndice);
		i = i + 1;
	}
}

void mostrarVector(vector<int> v){
	cout << "[";
	for (int i = 0; i < v.size()-1; i++)
		cout << v[i] << ",";

	cout << v[v.size()-1]<<  "]" << endl;
}