#include "search_algos.h"
/**
 * linear_search - ...
 * @array: ...
 * @size: ...
 * @valoe: ...
 */
int linear_search(int *array, size_t size, int value)
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
	}
		return (-1);

}
