#include <stdio.h>

int main ()
{
	int NUMBER, HorasTrab;
	float ValorHora, Salario;
	scanf ("%i",&NUMBER);
	scanf ("%i",&HorasTrab);
	scanf ("%f",&ValorHora);
	Salario=HorasTrab*ValorHora;
	printf ("NUMBER = %i\n",NUMBER);
	printf ("SALARY = U$ %.2f\n",Salario);
	
	return 0;
}