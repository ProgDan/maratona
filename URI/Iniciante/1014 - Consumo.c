#include <stdio.h>

int main ()
{
	int Km;
	double Litros,Medio;
	scanf ("%i",&Km);
	scanf ("%lf",&Litros);
	Medio=Km/Litros;
	printf ("%.3lf km/l\n",Medio);
	
	return 0;
}