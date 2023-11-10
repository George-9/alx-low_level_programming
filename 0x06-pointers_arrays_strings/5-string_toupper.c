/**
 * string_toupper - converts a string to uppercase
 * @s: the string
 *
 * only the lowercase letters are changed
 * Return: the converted string
 */
char *string_toupper(char *s)
{
	char *tmp = s;

	while (*tmp != '\0')
	{
		if (*tmp >= 'a' && *tmp <= 'z')
			*tmp -= 32;
		tmp++;
	}
	*tmp = '\0';
	return (tmp);
}
