#include <stdio.h>

double calculate_pi(int terms) {
    double pi = 0.0;
    for (int k = 0; k < terms; k++) {
        pi += (k % 2 == 0 ? 1.0 : -1.0) / (2.0 * k + 1.0);
    }
    return 4.0 * pi;
}

int main() {
    int terms = 1000000; // Number of terms for approximation
    double pi = calculate_pi(terms);
    printf("Approximation of Pi: %.15f\n", pi);
    return 0;
}
