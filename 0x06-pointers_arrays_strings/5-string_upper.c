/**
 * string_toupper - a function that changes all lowercase letters to upper case
 * @s: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
