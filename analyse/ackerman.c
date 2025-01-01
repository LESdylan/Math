#include <stdio.h>
#include <time.h>

unsigned int ackermann(unsigned int m, unsigned int n) {
    if (m == 0) return n + 1;
    if (n == 0) return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    clock_t start = clock();

    unsigned int result = ackermann(3, 6); // Stress test

    clock_t end = clock();
    printf("Ackermann(3, 6) = %u\n", result);
    printf("Time taken: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
