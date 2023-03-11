#include "main.h"

/**
 * _sqrt_recursion - return natural sqrt of num
 *
 * @n: integer
 *
 * Return integer
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	int result = -1;

	if (n < 0) {
		return -1;
	}
	if (n == 0 || n == 1) {
		return n;
	}
	while (i <= n/i) {
		if (i == n/i) {
			return i;
		}
		i++;
	}
	result = _sqrt_recursion(n/i-1);
	if (result == -1) {
		return -1;
	}
	return i-1;
}
