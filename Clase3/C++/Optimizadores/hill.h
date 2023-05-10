#ifndef HILL_H_INCLUDED
#define HILL_H_INCLUDED

#include<iostream>

using namespace std;

class Hill {
private:
    double solucionActual;

public:
    double (*func)(double);
    double evaluar(double arg);
    double generarSolucionInicial();
    double generarVecino(double x);
    double hillClimbing(int maxIteraciones);
};

#endif // HILL_H_INCLUDED
