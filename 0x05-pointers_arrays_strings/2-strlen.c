/**
* _strlen - gets the number of characters in a string
*
* @s: the string
* Return: the length of the string
*/
int _strlen(char *s)
{
	int len;

	while (*s++ != '\0')
		len++;

	return (len);
}

