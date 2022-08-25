#include "search_algos.h"
/**
 * binary_search - ...
 * @array: ...
 * @size: ...
 * @value: ...
 * Return: ...
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (array)
	{
		while (left <= right)
		{
			mid = (right + left) / 2;

			printf("Searching in array: ");
			for (i = left; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i != right)
					printf(", ");
			}
			printf("\n");
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	return (-1);
}
