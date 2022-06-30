/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Value
 * @y: Power to be raised
 *
 * Return: Results of x power to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
