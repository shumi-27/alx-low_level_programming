#include "main.h"
/**
 * prime_not - checks if number is primer/not.
 * @n : number.
 * @i : divisor.
 * Return: 1 if num is prime or 0 if num is not.
 */
int prime_not(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
return (prime_not(n, i - 1));
}
/**
 * is_prime_number - starts prime_not.
 * @n : number to ber checked.
 * Return: 1 if num is prime and 0 is not.
 */
int is_prime_number(int n)
{
	return (prime_not(n, n - 1));
}
