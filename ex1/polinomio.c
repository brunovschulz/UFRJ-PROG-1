#include <stdio.h>
#include "polinomio.h"
#include <math.h>

polinomio somarPoli(polinomio p1, polinomio p2){
    polinomio p3;
    p3.c0 = p1.c0 + p2.c0;
    p3.c1 = p1.c1 + p2.c1;
    p3.c2 = p1.c2 + p2.c2;
    p3.c3 = p1.c3 + p2.c3;
    return p3;
}

polinomio derivadaPoli(polinomio p){
    p.c0 = p.c1;
    p.c1 = 2*p.c2;
    p.c2 = 3*p.c3;
    p.c3 = 0;
    return p;
}
solucao raizesPoli(polinomio p){
    float delta = pow(p.c1, 2)- (4 * p.c2 * p.c0);

    solucao raiz;

    raiz.x1 = (-p.c1 + sqrt(delta))/ (2*p.c2);
    raiz.x2 = (-p.c1 - sqrt(delta))/ (2*p.c2);

    return raiz;
}

float valorPoli(polinomio p, int x){
    float soma = 0;
    soma += p.c3*pow(x,3);
    soma += p.c2*pow(x,2);
    soma += p.c1*x;
    soma += p.c0;

    return soma;
}
