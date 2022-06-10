#include <stdio.h>
/**
 * main -- entry point
 * Return: 0
 */
int main(void)
{
	long pri = 1, sec = 2, x;
	long sum = 0;

	for (x = 0; x < 4000000; x++)
	{
		x = pri + sec;
		pri = sec;
		sec = x;
		if (pri % 2 == 0)
		{
			sum += pri;
		}
	}
	printf("%li\n", sum);
	return (0);
}
