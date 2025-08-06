#include "sort.h"

/**
 * swap - Swap two integers
 * @a: First integer
 * @b: Second integer
 */

void swap(int *a, int *b)
{
	if (a != b)
	{
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
}


/**
 * lomuto_partition - Lomuto partition scheme
 * @array: The array to partition
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 * Return: Index of pivot after partition
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * quicksort_recursive - Recursive quicksort helper
 * @array: The array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 */

void quicksort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high, size);

		quicksort_recursive(array, low, pi - 1, size);
		quicksort_recursive(array, pi + 1, high, size);
	}
}


/**
 * quick_sort - Quick sort function (Lomuto partition scheme)
 * @array: The array to sort
 * @size: Size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort_recursive(array, 0, size - 1, size);
}
