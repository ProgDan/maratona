#include <stdio.h>
#include <stdlib.h>

int Maior(int n1,int n2)
{
	int maior;
	maior = (n1+n2+abs(n1-n2))/2;
	return (maior);
}
int main ()
{
	int A,B,C,MaiorAB;
	scanf("%d%d%d",&A,&B,&C);
	MaiorAB=Maior(A,B);
	MaiorAB=Maior(MaiorAB,C);
	printf("%d eh o maior\n",MaiorAB);
	
	return 0;
}
