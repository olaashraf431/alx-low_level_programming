#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the alphabet.
 *
 *Return: always 0 (Sucess)
 */
int main(void)
{
	char ch[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i <= 25; i++)
	{
		putchar (ch[i]);
	}
	putchar('\n');
	return (0);
}
