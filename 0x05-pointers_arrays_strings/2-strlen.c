#include "main.h"
/**
 * _strlen - Entry point
 * @s: input
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
