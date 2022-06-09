#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int pri = 1, sec = 2, sum;
	int i;

	printf("%d, %d", pri, sec);
	for (i = 3; i <= 50; i++)
	{
		sum = pri + sec;
		printf(", %ld", sum);
		pri = sec;
		sec = sum;
	}
	return (0);
}
