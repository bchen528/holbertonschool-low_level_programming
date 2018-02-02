#include "holberton.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: string
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122) /*if 1st letter of word is lowercase, capitalize it*/
		{
			s[i] = s[i] - 32;
		}
		i++;
		if (s[i] != '\0')
		{
			while (s[i] >= 97 && s[i] <= 122)
			{
				i++;
			}
			while (is_separator(s[i]) == 1)
			{
				i++;
			}
		}
		else
		{
			return (s);
		}
		
	}
	return (s);
}

/**
 * is_separator - returns 
 * @s: parameter to be checked
 * Return: 0 if not sepecial character, 1 if special character
 */

int is_separator(char *s)
{
	int i, j = 0;
	if (s[i] == ',' 
	    || s[i] == ';' 
	    || s[i] == '.' 
	    || s[i] == '!'
	    || s[i] == '?' 
	    || s[i] == '"'
	    || s[i] == '(' 
	    || s[i] == ')'
	    || s[i] == '{' 
	    || s[i] == '}'
	    || s[i] == '\n'
	    || s[i] == '\t'
	    || s[i] == ' ')
	{
		j = 1;
		return (j);
	}
	else
	{
		j = 0;
		return (j);	
	}
}
