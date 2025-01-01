#include <stdio.h>
#include <time.h>

// Factorial function
unsigned long long factorial(unsigned int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    clock_t start = clock();

    unsigned long long result = factorial(20);

    clock_t end = clock();
    printf("Factorial(20) = %llu\n", result);
    printf("Time taken: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
