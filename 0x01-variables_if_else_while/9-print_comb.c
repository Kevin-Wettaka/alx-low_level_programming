i#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar('');
		}
	}
	putchar('\n');
	return (0);
}
