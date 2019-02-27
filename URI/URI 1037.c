
# include <stdio.h>

int main()
{
	double n;
	scanf ( "%lf", &n );

	if ( n < 0 || n > 100 )
	{
		printf ( "Fora de intervalo\n" );
		return 0;
	}

	printf ( "Intervalo " );

	if ( n <= 25 )
		printf ( "[0,25]\n" );

	else if ( n <= 50 )
		printf ( "(25,50]\n" );

	else if ( n <= 75 )
		printf ( "(50,75]\n" );

	else printf ( "(75,100]\n" );

	return 0;
}
