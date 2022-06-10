#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_ev = 0;
	int pri;
	int sec;
	int sum = 1;

	pri = 1;
	sec = 1;

	while (sec < 4000000)
	{
		sum = pri + sec;
		pri = sec;
		sec = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_ev += sum;
	}
	printf("%d\n", sum_ev);

	return (0);
}
