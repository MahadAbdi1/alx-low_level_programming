#include "main.h"

/**
 * swap_int - swaps two vaules of integers
 * @a: input 1
 * @b: input 2
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}