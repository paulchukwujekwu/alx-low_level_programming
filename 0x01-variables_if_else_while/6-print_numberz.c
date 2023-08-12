#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Description: program that prints all single digit numbers of base 10
 * Return: always return zero for success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
