#include <stdio.h>

/**
* main - Prints and pass text to standard error
* Return: 0
*/

int main(void)
{
	char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, 59, 1, stderr);
	return (1);
}
