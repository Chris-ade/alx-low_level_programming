#include "lists.h"
void printFunc(void) __attribute__ ((constructor));
/**
 * printFunc - start before main.
 * @void: input.
 * Return: text.
 */
void printFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
