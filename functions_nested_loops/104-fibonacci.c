#include <stdio.h>
/**
 * main -- entry point
 * Return: 0
 */
int main(void)
{
	int c, o;
	unsigned long a = 1;
	unsigned long b = 1;
	long a_h, a_t, b_h, b_t, sum_h, sum_t;
	unsigned long sum = 0;

	printf("1");

	for (c = 2; c < 93; c++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	a_h = a / 1000000000;
	a_t = a % 1000000000;
	b_h = b / 1000000000;
	b_t = b % 1000000000;

	for  (; c < 99; c++)
	{
		o = (a_t + b_t) / 1000000000;
		sum_t = (a_t + b_t)-(1000000000 * o);
		sum_h = (a_h + b_h) + o;
		printf(", %lu%lu", sum_h, sum_t);
		a_h = b_h;
		a_t = b_t;
		b_h = sum_h;
		b_t = sum_t;
	}
	printf("\n");

	return (0);
}
