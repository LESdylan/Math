#include <stdio.h>
#include <math.h>
int first_digit(int n)
{
	if (n < 0)
		n = -n;
	int num_digit = (int)log10(n);
	int firstDigit = n / (int)pow(10, num_digit);
	return firstDigit; 
}
int main(void)
{
	int input;
	printf("Enter a digit");
	scanf("%d", &input);
	printf("%d\n",first_digit(input));
	return 0;
}
