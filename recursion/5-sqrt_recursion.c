/**
 * helper_f - Help to calculate square root of number
 * @c: Count
 * @n: Number
 *
 * Return: Square root of n
 */
int helper_f(int c, int n)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);

	return (1 + helper_f(x + 2, y - x));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number
 *
 * Return: Natural square root of n
 */
int _sqrt_recursion(int n)
{
	helper_f(1, n);
}
