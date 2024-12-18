#include <stdio.h>

int interest(float S, float S_prime, float t)
{
    int n = 0;

    while (S < S_prime)
    {
        S = S * (1 + (t / 100)); 
        n++;
    }

    return n;
}

int main(void)
{
    float S, S_prime, t;
    int years;

    printf("Input the initial sum (S): ");
    scanf("%f", &S);

    do
    {
        printf("Input the target sum (S_prime, must be greater than %.2f): ", S);
        scanf("%f", &S_prime);
    } while (S_prime <= S);

    printf("Input the annual growth rate (t%%): ");
    scanf("%f", &t);

    years = interest(S, S_prime, t);
    printf("It will take %d years for the sum to reach or exceed %.2f.\n", years, S_prime);

    return 0;
}

