int _len(char *, int c);

/**
 * _strlen_recursion - gets the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	return (_len(s, 0));
}

/**
 * _len - gets the lenght of a string through recursion
 * @str: the string
 * @c: the length of str(in the end)
 *
 * Return: lenght of str(int)
 */
int _len(char *str, int c)
{
	if (*str == '\0')
		return (c);
	return (_len(str + 1, c + 1));
}
