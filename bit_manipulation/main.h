#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

unsigned int _strlen(const char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}


int _putchar(char c);

unsigned int binary_to_uint(const char *b);

#endif /* MAIN_H */
