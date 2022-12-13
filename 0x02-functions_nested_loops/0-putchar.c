#include "main.h"

/**
 * main - print "_putchar" followed by a new line
 * Description: you are not allowed to include standard libraries
 * Return: 0
 */

int main(void)
{
	char myvar[] = "_putchar";
	int i = 0;

	while (myvar[i] != '\0')
	{
		_putchar(myvar[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
