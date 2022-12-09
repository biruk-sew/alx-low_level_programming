#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int once = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (once = '0'; once <= '9'; once++)
		{
			if (!((once == tens) || (tens > once)))
			{
				putchar(tens);
				putchar(once);
				if (!(once == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

