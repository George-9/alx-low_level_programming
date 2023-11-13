/**
 * _memcpy -  a function that copies memory area
 *
 * @dest: where the bytes are copied
 * @src: the source of `the bytes`
 * @n: cont and the exact number of bytes to copy
 *
 * copies n bytes from memory area src to memory area dest
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;
	unsigned int l = 0;

	while (l < n)
	{
		*c = *src;
		l++;
		c++;
		src++;
	}
	return (dest);
}
