
# include <stdio.h>
# include <math.h>

int main()
{
	double a, b, c;
	scanf ( "%lf %lf %lf", &a, &b, &c );
	
	double D = b * b - 4 * a * c;
	
	if ( a == 0 || D < 0 )
	{
		printf ( "Impossivel calcular\n" );
		return 0;
	}
	
	double r1 = ( -b + sqrt ( D ) ) / ( 2 * a );
	double r2 = ( -b - sqrt ( D ) ) / ( 2 * a );

	printf ( "R1 = %.5lf\n", r1 );
	printf ( "R2 = %.5lf\n", r2 );

	return 0;
}
