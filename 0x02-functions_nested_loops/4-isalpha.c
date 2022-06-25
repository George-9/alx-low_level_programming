/**
* _isalpha - function that returs 1 or 0 based on the given parameter
*
* @c: character to check
*
* Return: int (0 if c is not an alphabet(lowercase or uppercase) else 1)
*/
int _isalpha(int c)
{
	char checker;

	for (checker = 'a'; checker <= 'z'; checker++)
	{
		if (c == checker || c == checker - 32)
		{
			return (1);
		}
	}
	return (0);
}
