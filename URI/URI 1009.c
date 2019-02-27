
#include <stdio.h>

int main()
{
	char name[200];

	double a, b;
	gets ( name );
	scanf ( "%lf %lf", &a, &b );

	printf ( "TOTAL = R$ %.2lf\n", a + b * .15 );

	return 0;
}
