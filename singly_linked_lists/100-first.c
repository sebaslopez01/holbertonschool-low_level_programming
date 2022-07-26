#include <stdio.h>

/**
 * before_main - Prints a text before main function
 *
 * Return: void
 */
void before_main(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
