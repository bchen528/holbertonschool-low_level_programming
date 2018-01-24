#include "holberton.h"

/**
 * print_times_table - prints n times table
 * @n: determine which times table
 * Return: 0
 */

void print_times_table(int n)
{
	int row, column;

        for (row = 0; row < (n + 1); row++)
        {
                for (column = 0; column < (n + 1); column++)
                {
                        if (((row * column) / 10) == 0)
                        {
                                if (column != 0)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                        _putchar(' ');
					_putchar(' ');
                                }
                                _putchar(((row * column) % 10) + '0');
                        }
                        else if ((((row * column) / 10) / 10) >= 1) 
                        {
                                if (column != 0)
                                {
                                        _putchar(',');
                                        _putchar(' ');
                                }
				_putchar((((row * column) / 10) / 10) + '0');
				_putchar(((row * column) / 10) + '0');
				_putchar(((row * column) % 10) + '0');
						  
			}
			else
			{
				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
                                _putchar(((row * column) / 10) + '0');
                                _putchar(((row * column) % 10) + '0');
                        }
                }
                _putchar('\n');
        }
}
