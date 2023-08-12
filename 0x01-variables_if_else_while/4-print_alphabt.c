#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Description: program that prints the alphabet in lowercase
 * Return: always return zero for success
 */
int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != e && lower != q)
			putchar(lower);
	}
	putchar('\n');
	return (0);
}
