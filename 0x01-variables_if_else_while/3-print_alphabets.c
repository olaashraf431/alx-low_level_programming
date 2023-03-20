#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return: 0 always (Sucess)
 */
int main(void)
{
	char ch[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(ch[i]);
	}

	putchar('\n');
	return (0);





}

