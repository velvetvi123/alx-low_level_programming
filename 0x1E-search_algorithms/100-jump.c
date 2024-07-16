#include "search_algos.h"

/**
 * jump_search - searches for a specific value in a sorted integer array
 *
 * @array: pointer to the initial element of the array
 * @size:  total number of elements in the array
 * @value: value to search for
 * Return: the first index where the value is found, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
    size_t idx, interval, bound;

    if (array == NULL || size == 0)
        return (-1);

    interval = sqrt(size);

    for (idx = bound = 0; bound < size && array[bound] < value;)
    {
        printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
        idx = bound;
        bound += interval;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", idx, bound);

    bound = bound < size ? bound : size - 1;
    for (; idx < bound && array[idx] < value; idx++)
        printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
    printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

    return (array[idx] == value ? (int)idx : -1);
}

