#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a by b
 * @a: first number, dividend
 * @b: second number, divisor
 * Return: result of dividion of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - find remainder of a divided by b
 * @a: first number, dividend
 * @b: second number, divisor
 * Return: remainder of division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
