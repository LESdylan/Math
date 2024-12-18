#include <stdio.h>

void syracuse_recursive(int n)
{
    if (n == 1)
    {
        printf("%d\n", n);
        return;
    }

    printf("%d\n", n);

    if (n % 2 == 0)
        syracuse_recursive(n / 2);
    else
        syracuse_recursive(3 * n + 1);
}

int main(void)
{
    int n;


    printf("Entrez un entier positif : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Veuillez entrer un entier positif.\n");
        return 1;
    }
    printf("Suite de Syracuse à partir de %d :\n", n);
    syracuse_recursive(n);

    return 0;
}

