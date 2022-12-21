#include "main.h"
/**
 * *leet - Entery point
 * @str: input
 * Return: char
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == lee[indx2] ||
					str[indx1] - 32 == lee[indx2])
				str[indx1] = indx2 + 0;
		}
		indx1++;
	}
	return (str);
}
