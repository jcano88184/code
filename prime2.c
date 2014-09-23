#include <stdio.h>
int main (void)
{
	int fibonacci = 1, a, b, c;

	do {
		c = fibonacci;
		printf ("%i\n", c);
		++fibonacci;
	}
	while (fibonacci < 10);

	return 0;
}
