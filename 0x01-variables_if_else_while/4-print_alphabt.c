#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabet
 * Description: prints the alphabet in lowercase
 * Return: 0 always (Sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
