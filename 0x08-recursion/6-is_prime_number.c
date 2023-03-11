#include "main.h"
/**
 * _is_prime_number - check if integer is a prime number
 * @n: integer
 *
 * Return: 1 or 0
 */
int checkprime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (1 * checkprime(n, --i));
}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkprime(n, n - 1));
}
