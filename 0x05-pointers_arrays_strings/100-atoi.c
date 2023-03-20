/**
 * _atoi - converts a string to an integer
 * @s: the input string
 *
 * Return: the integer value of the input string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)  /* stop if a non-digit is encountered after a digit */
			break;
		s++;
	}

	return (sign * num);
}
