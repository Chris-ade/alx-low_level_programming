#include <stdio.h>

/**
 * main - Print the alphabet in lowercase, followed by a new line 
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);

}
