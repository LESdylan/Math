#include <stdio.h>

void syracuse(int n)
{
    int res = n;

    while (res > 1) 
    {
        if (res % 2 == 0) 
            res = res / 2;
        else
            res = (res * 3) + 1;

        printf("%d\n", res);
    }
}

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Syracuse sequence starting with %d:\n", n);
    syracuse(n);

    return 0;
}

