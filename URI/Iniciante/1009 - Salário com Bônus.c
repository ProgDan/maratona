#include <stdio.h>

int main ()
{
	char NomeDoFunci;
	double Salario, Vendas, Comissao;
	scanf ("%s",&NomeDoFunci);
	scanf ("%lf",&Salario);
	scanf ("%lf",&Vendas);
    Comissao=((Vendas*15)/100)+Salario;
	printf ("TOTAL = R$ %.2lf\n",Comissao);
	
	return 0;
}