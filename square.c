#include <stdio.h>

float squareRoot (float x)
{
    const float epsilon = 0.00001;
    float	guess = 1.0;
    float absoluteValue (float x);
    
    if (x < 0)
    {
;	printf ("Negative argument to squareroot.\n");
        return -1.0;
    }

    while ( absoluteValue (guess * guess - x) >= epsilon )
	guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int main (void)
{
    printf ("r2 de 2 = %f\n", squareRoot (2.0));
    printf ("r2 de 144 = %f\n", squareRoot (144.0));
    printf ("r2 de -17.5 = %f\n", squareRoot (-17.5));

    return 0;
}