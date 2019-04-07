//
// Created by Lisandro Diaz  on 2019-04-07.
//

#ifndef CLASE02_ARCHIVOS_HEADER_H
#define CLASE02_ARCHIVOS_HEADER_H

#include <iostream>

using namespace std;

/*
 * Recibe un enteros n, devuelve si es primo o no.
 * */
bool isPrime(int n);

/*
 * Recibe dos enteros (a,b), e intercambia sus valores.
 */
void swap(int &a, int &b);

/*
 * Recibe un divisor y un dividendo, y realiza la division de enteros,
 * cambiando el valor de entrada por cociente y resto.
 * Utiliza auxDiv.
 */
void division(int & dividendo, int & divisor);

/*
 * Funcion auxiliar de division.
 */
int auxDiv(int a, int b);

/*
 * Escribe en un archivo los n primos gemelos.
 * Si bien existen infinitos primos, no se sabe si son infinitos gemelos.
 */
void primosGemelos(int n);

/*
 * Recibe un entero a, y devuelve la cantidad de pasos que hace para llegar a 1
 * siguiendo la conjetura de Collatz.
 */
int collatz(int a);

#endif //CLASE02_ARCHIVOS_HEADER_H
