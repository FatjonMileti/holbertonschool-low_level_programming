#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int pri = 1, sec = 2, sum, i;

	printf("%d, %d", pri, sec);
	for (i = 2; i < 50; i++)
	{
		sum = pri + sec;
		pri = sec;
		sec = sum;
		printf(",%d", sum);
	}
	return (0);
}
