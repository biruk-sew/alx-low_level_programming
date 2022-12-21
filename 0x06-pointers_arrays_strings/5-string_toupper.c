#include "main.h"
/**
 * *string_toupper - Entery point
 * @str: string input
 * Return: char
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
