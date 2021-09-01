#include <stdio.h>

int main()
{
	int n, result = 0;

	printf("Generate and print an inversed 9-based complementary number of an integer number\n");
	printf("Enter integer number = ");
	scanf("%d", &n);

	if (n >= 0)
	{
		while (n != 0)
		{
			result *= 10;
			result += (9 - n % 10);
			n = n / 10;
		}
	}
	else
	{
		n = -n;
		while (n != 0)
		{
			result *= 10;
			result += (9 - n % 10);
			n = n / 10;
		}
		result = -result;
	}
	printf("\nIts inversed 9-based complementary number = %d", result);
	return 0;
}
