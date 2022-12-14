#include <stdio.h>
/**
*main- prints the alphabet in lowercase, followed by a new line.
* Retun: Always 0
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}
