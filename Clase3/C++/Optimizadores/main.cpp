#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#include "hill.h"

using namespace std;

double f(double x){
    return cos(x);
}
double df(double x){
    return 2 + 2*x;
}

double gradienteDescendente(double w, double alpha, int maxIter){
    double x;
    for (int i = 0; i < maxIter; i++){
        x = w - alpha*df(x);
        w = x;
    }
    return x;
}

int main(){

//    double w = 0;
//    double alpha = 0.01;
//    int maxIter = 10000;
//    double minimo = gradienteDescendente(w, alpha, maxIter);
//    cout << "El mínimo es: " << minimo << endl;


    srand(time(nullptr));
    Hill h;
    h.func = f;
    int maxIteration = 10000;
    double solution = h.hillClimbing(maxIteration);

    cout << "x = " << solution << ", f(x) = " << h.evaluar(solution) << endl;
    return 0;
}
