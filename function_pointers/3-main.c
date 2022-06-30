#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *f;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	f = argv[2];
	num2 = atoi(argv[3]);

	if ((*f == '/' ||  *f == '%') && num2 == 0)

	{
		printf("Error\n");
		exit (100);
	}
	if (get_op_func(f) == NULL || f[1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}
        printf ("%d\n", get_op_func(f)(num1, num2));
	return (0);
}
