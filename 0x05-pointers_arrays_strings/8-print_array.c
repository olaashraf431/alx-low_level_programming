#include "main.h"
/**
* print_array - a function that prints n elements of an array of integers
* @a: array name
* @n: is the number of array to be printed
* Return: a and n inputs
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		else
		{
		}
	}
	printf("\n");
}
