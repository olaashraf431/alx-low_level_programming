#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main enter point
 * Description: program that prints the alphabet in lowercase
 * Retur: 0(sucess)
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
