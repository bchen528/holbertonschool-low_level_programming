#include "holberton.h"

/**
 * is_prime_number - find a prime number
 * @n: number to be assessed
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
		return (0);
	x = n - 1; /* search for factors of n, don't include n*/
	return (check_prime(n, x));
}

/**
 * check_prime - checks if number is prime or not
 * @n: number to be assessed
 * @x: potential factor
 * Return: 0 if not prime, otherwise return prime number
 */

int check_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0)
		return (0);
	return (check_prime(n, x - 1));
}
