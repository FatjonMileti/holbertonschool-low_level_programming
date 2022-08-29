#include "search_algos.h"
/**
 * jump_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: ...
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL || size == 0)
		return (-1);

	start = 0;
	end = 0;

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end = end + sqrt(size);

		if (start >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	end = MIN(end, size - 1);

	for (i = start; i <= end; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
