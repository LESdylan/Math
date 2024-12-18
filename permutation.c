#include <stdio.h>

// Function to calculate the sum of squares from 1 to n
int perm(int n)
{
    if (n == 0)
        return 1;
    return n * perm(n - 1);
}

int main(void)
{
    int result;
    result = perm(5);
    printf("factorial of 5 is: %d\n", result);

    return 0;
}

