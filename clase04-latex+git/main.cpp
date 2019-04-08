#include <iostream>
using namespace std;


long long int factorial(int n){
    if(n == 1 or n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int fibonacci(int n){
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

bool esPar(int n){
    return n % 2 == 0;
}

int nck(int n, int k){
    if(k == n or k == 0){
        return 1;
    }
    return nck(n-1,k-1) + nck(n-1,k);
}


int main() {
    cout << esPar(fibonacci(5)) << endl;
    return 0;
}