/**
*
*
*
*
*
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
