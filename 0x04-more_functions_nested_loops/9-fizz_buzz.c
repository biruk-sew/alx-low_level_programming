#include <stdio.h>
#include <stdlib.h>
/**
 * main - put puzzel each number of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int i;
	char fb[] = "FizzBuzz";
	char f[] = "Fizz";
	char b[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", fb);
		else if (n % 3 == 0)
			printf("%s", f);
		else if (n % 5 == 0)
			printf("%s", b);		}
		else
			printf("%d", i);
	}
	printf('\n');
	return (0);
}
