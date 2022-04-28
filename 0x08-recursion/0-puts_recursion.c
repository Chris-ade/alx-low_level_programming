#include "main.h"

/**
 * _puts_recursion - prints the string and a new line
 * @str: pointer to the string to print
 * Return: void
 */
void _puts_recursion(char *str)
{
  int i = 0;

	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	  putchar('\n');
}
