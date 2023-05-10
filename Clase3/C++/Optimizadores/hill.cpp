#include <cmath>
#include <cstdlib>
#include <ctime>

#include "hill.h"

double Hill::evaluar(double arg){
    return func(arg);
}
double Hill::generarSolucionInicial(){
    return -10 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (10 - (-10))));
}
double Hill::generarVecino(double x){
    return x + (-1 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (1 - (-1)))));
}
double Hill::hillClimbing(int maxIteraciones){
    solucionActual = generarSolucionInicial();
    int iteraciones = 0;
    while(iteraciones < maxIteraciones){
        double FitnessActual = evaluar(solucionActual);
        double solucionesVecinas = generarVecino(solucionActual);
        double FitnessVecino = evaluar(solucionesVecinas);
        if(iteraciones < 10){
            cout << solucionActual << " " << FitnessActual << " " << solucionesVecinas << " " <<FitnessVecino << endl;
        }
        if(FitnessVecino > FitnessActual){
            solucionActual = solucionesVecinas;
        }
        iteraciones++;
    }
    return solucionActual;
}







