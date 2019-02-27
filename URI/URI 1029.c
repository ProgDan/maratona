
#include <stdio.h>

static int calls_1;

int calls ( int X )
{
	if ( X == 0 ) return 0;

	if ( X == 1 )
	{
		calls_1++;
		return 0;
	}

	return calls ( X - 1 ) + calls ( X - 2 ) + 2;
}

int main()
{
	int N, X, i, ans;

	scanf ( "%d", &N );

	for ( i = 0; i < N; i++ )
	{
		scanf ( "%d", &X );

		calls_1 = 0;
		ans = calls ( X );

		printf ( "fib(%d) = %d calls = %d\n", X, ans, calls_1 );
	}

	return 0;
}
