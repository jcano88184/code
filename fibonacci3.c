#include <stdio.h>
int main (void)
{
	int fibonacci = 1, a, b, c;

	do {
		a = fibonacci - 2;
		b = fibonacci - 1;
		c = a + b;
		printf ("%i\n", c);
		++fibonacci;
	}
	while (fibonacci < 10);

	return 0;
}
