#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints single number
 *Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
