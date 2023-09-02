#include <stdio.h>
/**
 * main - print number of argument passed to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns zero
 **/
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc -1);
	return (0);
}
