#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		char c = i + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
