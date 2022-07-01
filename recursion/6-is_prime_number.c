/**
 * helper_f - Helps to get prime number
 * @c: Counter
 * @n: Number to verify
 *
 * Return: 1 if is a prime number, 0 otherwise
 */
int is_prime(int c, int n)
{
	if (n % c == 0)
		return (0);
	if (c <= n / 2)
		is_prime(c + 1, n);
	else
		return (1);
}

/**
 * is_prime_number - Verify that the input is a prime number
 * @n: Number to verify
 *
 * Return: 1 if is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n == 1)
		return (0);

	return (is_prime(2, n));
}
