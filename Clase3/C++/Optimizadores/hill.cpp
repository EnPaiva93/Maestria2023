#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Evaluate the fitness of the current solution
double evaluate(double (*func)(double), double arg) {
    return func(arg);
}

// Generate a random initial solution
double generateInitialSolution() {
    return -10 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (10 - (-10))));
}

// Generate a new neighbor by adding a small random value to x
double generateNeighbor(double x) {
    return x + (-1 + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (1 - (-1)))));
}

// Hill Climbing algorithm
double hillClimbing(int maxIterations) {
    // Generate a random initial solution
    double currentSolution = generateInitialSolution();
    int iteration = 0;

    while (iteration < maxIterations) {
        // Evaluate the fitness of the current solution
        double currentFitness = evaluate(currentSolution);

        // Generate a new neighbor solution
        double neighborSolution = generateNeighbor(currentSolution);

        // Evaluate the fitness of the neighbor solution
        double neighborFitness = evaluate(neighborSolution);

        // If the neighbor has higher fitness, move to that solution
        if (neighborFitness > currentFitness) {
            currentSolution = neighborSolution;
        }
        iteration++;
    }
    return currentSolution;
}

// Evaluate the fitness of the current solution
double myfun(double x) {
    return 7 + 2*x - pow(x, 2);
}

int main() {
    srand(time(nullptr)); // seed the random number generator

    int maxIterations = 10000; // maximum number of iterations
    double solution = hillClimbing(maxIterations);

    // Print the final solution
    cout << "x = " << solution << ", f(x) = " << evaluate(solution) << endl;

    return 0;
}
 
