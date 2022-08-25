#include "search_algos.h"
/**
 * linear_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: ...
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);


}
