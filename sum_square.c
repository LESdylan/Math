#include <stdio.h>

// Function to calculate the sum of squares from 1 to n
int sum_square(int n)
{
    if (n == 0)
        return 0;
    return n * n + sum_square(n - 1);
}

int main(void)
{
    int result;
    result = sum_square(5);
    printf("Possibility is: %d\n", result);

    return 0;
}

~         
