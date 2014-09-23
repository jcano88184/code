#include <stdio.h>

int main (void)
{

	int i, numbers[10], sum = 0;

	printf ("escriba los 10 numeros para calcular el promedio:  \n");
	for ( i = 0; i < 11; ++i )
		scanf ("%i", &numbers[i]);
	
	for ( i = 0; i < 11; ++i )
		sum = sum + numbers[i];

	printf ("El promedio es: %i\n", sum / 10);

	return 0;
} 
