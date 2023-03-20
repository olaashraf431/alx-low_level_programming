#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- enter point
 * Description : print alphabet in uppercase
 * return: 0(sucess)
*/
int main(void)
{
	char ch[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	while (i <= 25)
	{
		putchar(ch[i]);
		i++;
	}

	putchar('\n');
	return (0);





}

