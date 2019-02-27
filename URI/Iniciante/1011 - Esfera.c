#include <stdio.h>

int main ()
{
	double Raio, Volume, Pi=3.14159;
	scanf ("%lf",&Raio);
	Volume=((4/3.0)*Pi)*(Raio*Raio*Raio);
	printf ("VOLUME = %.3lf\n",Volume);
	return 0;
}