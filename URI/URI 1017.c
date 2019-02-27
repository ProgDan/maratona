
#include <stdio.h>

int main()
{
	int a, b;
	float ans;

	scanf ( "%d %d", &a, &b );

	ans = ( a * b ) / 12.0;

	printf ( "%.3lf\n", ans );

	return 0;
}
