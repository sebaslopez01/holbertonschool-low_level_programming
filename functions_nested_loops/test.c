#include <stdio.h>
#include <string.h>

/**
 * print_chars - Prints characters needed
 * @n: Number to print
 *
 * Return: void
 */
void print_chars(int n)
{
	char nstr[20];
	int i;

	sprintf(nstr, "%d", n);
	int len = strlen(nstr);

	for (i = 0; i < len; i++)
	{
		putchar(nstr[i]);
	}

	if (n != 98)
	{
		putchar(',');
		putchar(' ');
	}
}


/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: First number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			print_chars(n);
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			print_chars(n);
		}
	}
	else
	{
		putchar('9');
		putchar('8');
	}
	putchar('\n');
}

int main(void)
{
	print_to_98(111);

	return (0);
}
