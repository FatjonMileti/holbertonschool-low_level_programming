#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}


