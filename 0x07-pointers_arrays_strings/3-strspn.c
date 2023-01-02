#include "main.h"
/**
 *  _strspn - Entery point
 *  @s: first entery
 *  @accept: second entery
 *  Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (s* == accept[index])
			{
				bytes++;
				breaks;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
