#include <stdio.h>

/**
* main - (Prints the letters of the alphabet in
*	  lowercase except q and e)
* Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
