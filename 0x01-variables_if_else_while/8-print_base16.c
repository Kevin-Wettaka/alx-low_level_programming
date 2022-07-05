#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
