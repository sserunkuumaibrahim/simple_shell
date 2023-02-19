#include "main.h"

/**
 * main - entry point
 * Return: always 0 success
 */
int main(void)
{
	char x = 55;

	write(1, &x, 1);
	return (0);
}
