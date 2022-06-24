/**
* _islower: function that returs 1 or 0 based on the given parameter
*
* @c: character to check
*
* Return: int (0 if c is not lowercase else 1)
*/
int _islower(int c)
{
	char checker;

	for (checker = 'a'; checker <= 'z'; checker++)
	{
		if (c == checker)
		{
			return 1;
		}
	}
	return 0;
}
