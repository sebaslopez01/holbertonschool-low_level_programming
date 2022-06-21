/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to int a
 * @b: Pointer to int b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
