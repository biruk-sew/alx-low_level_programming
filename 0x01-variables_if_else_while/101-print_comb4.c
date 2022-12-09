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
	int hunderds = '0';

	for (hunderds = '0'; hunderds <= '9'; hunderds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (once = '0'; once <= '9'; once++)
			{
				if (!((once == tens) || (tens == hunderds)
							|| (tens > once)
							|| (hunderds > tens)))
				{
					putchar(hunderds);
					putchar(tens);
					putchar(once);
					if (!(once == '9' && hunderds == '7' &&
								tens == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


