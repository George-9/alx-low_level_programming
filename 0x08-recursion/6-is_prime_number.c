int _prime(int n, int s);

/**
 *  is_prime_number - checks if a number is prime
 * @n:  the number
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - checks if n is prime
 * @n: the number
 * @s: the base
 *
 * Return: 1 if n is prime, otherwise 0
 */
int _prime(int n, int s)
{
	if (n <= 1)
		return (0);

	else if (s == n)
		return (1);

	else if ((n % s) == 0)
		return (0);

	else
		return (_prime(n, s + 1));
}
