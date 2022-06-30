/**
 * factorial - Returns the factorial of a number
 * @n: Factorial of n
 *
 * Return: Factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
