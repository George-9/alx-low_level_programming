int _sqrt(int n, int s);

/**
 * _sqrt_recursion - finds the squareroot of a number
 * @n:  the number
 *
 * Return: the squareroot of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}

/**
 * _sqrt - finds the square root of a number
 * @n: the number
 * @s: the base
 *
 * Return: the square root of n
 */
int _sqrt(int n, int s)
{
	if (n <= 0)
		return (-1);

	if (s * s > n)
		return (-1);

	if ((s * s) == n)
		return (s);

	return (_sqrt(n, s + 1));
}
