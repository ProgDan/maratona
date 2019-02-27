
#include <stdio.h>

int main()
{
	int X;
	double Y;

	scanf ( "%d %lf", &X, &Y );

	printf ( "%.3lf km/l\n", ( X * 1.0 ) / Y );
}
