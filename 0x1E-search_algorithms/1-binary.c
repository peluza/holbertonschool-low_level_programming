#include "search_algos.h"

/**
 * binary_search -  Binary search algorithm
 *
 * Return: number of the line
 */

int binary_search(int *array, size_t size, int value)
{
        size_t l = 0, r = size - 1, m, i;

        if (array == NULL)
                return (-1);

        while (l <= r)
        {
                printf("Searching in array: ");
                for (i = l; i <= r; i++)
                {
                        if (i == r)
                                printf("%d\n", array[i]);
                        else
                                printf("%d,", array[i]);
                }
                m = (l + r) / 2;
                if (array[m] < value)
                        l = m + 1;
                if (array[m] > value)
                        r = m - 1;
                else
                {
                        if (array[m] == value)
                                return (m);
                }
        }
        return (-1);
}