
#include <stdio.h>

int main()
{
	double a, b, c, d, avg1;
	scanf ( "%lf %lf %lf %lf", &a, &b, &c, &d );

	avg1 = ( a * 2 + b * 3 + c * 4 + d ) / 10;
	printf ( "Media: %.1lf\n", avg1 );

	if ( avg1 >= 7.0 )
	{
		printf ( "Aluno aprovado.\n" );
		return 0;
	}

	else if ( avg1 < 5.0 )
	{
		printf ( "Aluno reprovado.\n" );
		return 0;
	}

	else
	{
		printf ( "Aluno em exame.\n" );
		double x, avg;
		scanf ( "%lf", &x );
		printf ( "Nota do exame: %.1lf\n", x );
		avg = ( avg1 + x ) / 2.0;

		if ( avg >= 5.0 )
			printf ( "Aluno aprovado.\n" );

		else printf ( "Aluno reprovado.\n" );

		printf ( "Media final: %.1lf\n", avg );
	}

	return 0;

}
