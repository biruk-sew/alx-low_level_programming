#include "main.h"
/**
 * _isupper - the furnction that chack upper character
 * @c: input character
 * Return: 1 if c is upper case, 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
