//
// Created by Lisandro Diaz  on 2019-04-07.
//
#include "header.h"
#include <fstream>

bool isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void swap (int & a, int & b) {
    int aux;
    aux = a;
    a = b;
    b = aux;
}

int auxDiv(int a, int b){
    if(a > b){
        return 1 + auxDiv(a-b,b);
    }else{
        return 0;
    }
}

void division(int & dividendo, int & divisor) {
    int a = 0;
    int b;
    a = auxDiv(dividendo,divisor);
    b = a * divisor;
    dividendo = dividendo - b;
    divisor = a;
}

void primosGemelos(int n){
    ofstream fout;
    fout.open("primosgemelos.txt");
    while(n!=0){
        for(int i = 3;n>0;i++){
            if(isPrime(i) and isPrime(i+2)){
                n = n-1;
                fout << "(" << i << "," << i+2 << ")" << endl;
            }else{
                continue;
            }
        }
    }
    fout.close();
}

int collatz(int a){
    if(a % 2 == 0){
        return 1 + collatz(a/2);
    }
    else if(a % 2 == 1 and a != 1){
        return 1 + collatz(3*a + 1);
    }
    return 1;
}