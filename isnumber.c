#include "monty.h"

/**
 * is_number - check if a valid integer number is represented
 * @str: the string
 * 
 * Return: 1 if string is  a valid number, 0 otherwise
 */

int is_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ( i == 0 && str[i] == '-' && str[i + 1])
		{
			i++;
			continue;
		}
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
