#include <iostream>
#include <cmath>

double f(double x) {
    return std::pow(x, 2) - 2 * x - 7; // The function to minimize
}

double df(double x) {
    return 2 * x - 2; // The derivative of the function
}

double gradientDescent(double x, double alpha, int iterations) {
    for (int i = 0; i < iterations; i++) {
        x = x - alpha * df(x); // Update the current x value
    }
    return x;
}

int main() {
    double x = 0; // Starting point
    double alpha = 0.1; // Learning rate
    int iterations = 1000; // Number of iterations
    double minimum = gradientDescent(x, alpha, iterations); // Find the minimum of the function
    std::cout << "Minimum: " << minimum << std::endl; // Output the minimum value
    return 0;
}
 
