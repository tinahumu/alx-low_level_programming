#include<stdio.h>

/**
 * main - prints the alphabet in lower case
 * followed by new line except q and e
 * Return: Always 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
			putchar(al);
	}

	putchar('\n');

	return (0);
}
