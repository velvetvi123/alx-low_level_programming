#include "search_algos.h"

/**
 * interpolation_search - looks for a target value within an array of integers
 * using the Interpolation search method
 *
 * @array: the array to search
 * @size: the number of elements in the array
 * @value: the value to locate
 * Return: the index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double factor;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && array[low] <= value && array[high] >= value)
	{
		if (low == high)
		{
			if (array[low] == value)
				return low;
			break;
		}

		factor = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = low + (size_t)factor;

		printf("Value checked array[%zu]", pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return pos;

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}

