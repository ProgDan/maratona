
#include <stdio.h>

int main()
{
	int a1, a2, b1, b2;
	double p1, p2;

	scanf ( "%d %d %lf", &a1, &b1, &p1 );
	scanf ( "%d %d %lf", &a2, &b2, &p2 );

	printf ( "VALOR A PAGAR: R$ %.2lf\n", b1 * p1 + b2 * p2 );

	return 0;
}
