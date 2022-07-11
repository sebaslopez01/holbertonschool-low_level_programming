/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Function pointer to use
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
