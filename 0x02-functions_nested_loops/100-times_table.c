#include "holberton.h"

/**
 * print_times_table - prints n times table
 * @n: determine which times table
 * Return: 0
 */

void print_times_table(int n)
{
	int row, column;


	if (n > 15 || n < 0)
	{
		return;
	}

        for (row = 0; row < (n + 1); row++) /* hold row number*/
        {
                for (column = 0; column < (n + 1); column++) /* change column number*/
                {
			if (((row * column) / 10) == 0) /* first of two digits is a 0, so it's a single digit*/
                        {
                                if (column != 0) /*if the column is not 0, put a ,   */
                                {
					_putchar(',');                 
					_putchar(' ');
                                        _putchar(' ');
					_putchar(' ');
                                }
                                _putchar(((row * column) % 10) + '0'); /*prints product of row * column, last digit in character form*/ 
                        }
			else if (((row * column) / 100) == 0) /*prints 2 digits*/ 
			{
				if (column != 0) /*if not starting at first column, print 1 comma followed by two spaces*/
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
                                _putchar(((row * column) / 10) + '0'); /* print first digit*/
                                _putchar(((row * column) % 10) + '0'); /*print second digit*/
                        }
			else if (((row * column) / 100) >= 1) /*for 3 digit numbers, truncate for first digit*/ 
                        {
                                if (column != 0) /* for 3 digit numbers, put , and one space*/
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                }
				_putchar(((row * column) / 100) + '0'); /*print first digit*/
				_putchar((((row * column) / 10) % 10 ) + '0'); /* print second digit*/
				_putchar(((row * column) % 10) + '0'); /*print third digit*/
			}
		
                }
                _putchar('\n');
        }
}
