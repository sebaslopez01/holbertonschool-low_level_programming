/**
 * helper_f - Help to calculate square root of number
 * @c: Count
 * @n: Number
 *
 * Return: Square root of n
 */
int helper_f(int c, int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (1 + helper_f(c + 2, n - c));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number
 *
 * Return: Natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (helper_f(1, n));
}
