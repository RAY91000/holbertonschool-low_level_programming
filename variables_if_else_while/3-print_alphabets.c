#include <stdio.h>

/**
 * main - entry point
 *
 * description: print the alphabet in lowercase, then in uppercase,
 * followed by a new line
 *
 * Return: Always O (Sucess)
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{

		putchar(letter);
	}

	putchar('\n')

	return (0);
