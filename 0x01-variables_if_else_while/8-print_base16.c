#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Description: program that prints all the numbers of base 16 in lowercase
 * Return: always return zero for success
 */
int main(void)
{
	int i;
	char low;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
