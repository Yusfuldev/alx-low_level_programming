int _seperators(char c);

/**
 * cap_string -  capitalizes all words of a string.
 * @s: An input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**
 * _seperators - Separators of words: space, ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int _seperators(char c)
{
	int i = 0;
	char seperators[10] = { ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 10; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
