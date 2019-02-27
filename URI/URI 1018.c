
#include <stdio.h>

int main()
{
	int n, temp, i = 0;
	scanf ( "%d", &n );
	printf ( "%d\n", n );

	int a[7] = {100, 50, 20, 10, 5, 2, 1};

	while ( i < 7 )
	{
		temp = n / a[i];
		n = n % a[i];
		printf ( "%d nota(s) de R$ %d,00\n", temp, a[i] );
		i++;
	}

	return 0;
}
