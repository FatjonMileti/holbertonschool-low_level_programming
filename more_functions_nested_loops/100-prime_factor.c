#include <stdio.h>
/**
 * print_triangle - Gets n from main
 *@size: intiger
 * Return: void
 */
int main(void)
{
	long int num = 612852475143;
	int i;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%d\n",i);
	return (0);
}
