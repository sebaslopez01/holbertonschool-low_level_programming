/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array
 * @n: Number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i + n - 1];
		a[i + n - 1] = a[i];
		a[i] = temp;
	}
}
