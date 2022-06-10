#include<stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int pri, sec, sum;
	int i;

	pri = 1;
	sec = 2;
	printf("%ld, %ld", pri, sec);
	for (i = 3; i <= 50; i++)
	{
		sum = pri + sec;
		printf(", %ld", sum);
		pri = sec;
		sec = sum;
	}
	printf("\n");
	return (0);
}
