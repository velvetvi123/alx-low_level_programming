#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in the array
 * @value: value to search for
 * Return: the first index where the value is found, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
    size_t i = 0, step, jump = 0;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);

    while (jump < size && array[jump] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
        i = jump;
        jump += step;
    }

    printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

    jump = (jump < size) ? jump : size - 1;
    while (i < jump && array[i] < value)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        i++;
    }
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    return (array[i] == value) ? (int)i : -1;
}

