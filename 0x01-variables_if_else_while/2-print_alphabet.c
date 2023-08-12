#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: program that prints the alphabet in lowercase
 * Return: always return zero for success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}
