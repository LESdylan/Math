#include <stdio.h>
#include <math.h>
#include <stdint.h>

// Fonction pour calculer la factorielle
uint64_t factorial(int n) {
    if (n == 0 || n == 1) return 1;
    uint64_t result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Fonction pour calculer une approximation de Pi
double calculate_pi(int terms) {
    const double C = 426880 * sqrt(10005); // Constante de normalisation
    double sum = 0.0;

    for (int k = 0; k < terms; k++) {
        uint64_t num = factorial(6 * k) * (545140134 * k + 13591409); // Numérateur
        uint64_t denom = factorial(3 * k) * pow(factorial(k), 3) * pow(640320, 3 * k); // Dénominateur

        sum += (k % 2 == 0 ? 1 : -1) * (double)num / denom;
    }

    return C / sum; // 1 / Pi, donc on retourne Pi
}

int main() {
    int terms = 5; // Nombre de termes pour l'approximation
    double pi = calculate_pi(terms);
    printf("Approximation de Pi: %.15f\n", pi);
    return 0;
}
