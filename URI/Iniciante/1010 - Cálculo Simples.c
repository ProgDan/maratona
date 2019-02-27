#include <stdio.h>

int main ()
{
	int Codigo1, Npeca1, Codigo2, Npeca2;
	float ValorP1, ValorP2, Total;
	scanf ("%i",&Codigo1);
	scanf ("%i",&Npeca1);
	scanf ("%f",&ValorP1);
	scanf ("%i",&Codigo2);
	scanf ("%i",&Npeca2);
	scanf ("%f",&ValorP2);
	Total=(Npeca1*ValorP1)+(Npeca2*ValorP2);
	printf ("VALOR A PAGAR: R$ %.2f\n",Total);
	
	return 0;
}