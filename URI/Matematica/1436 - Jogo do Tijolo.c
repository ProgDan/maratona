#include <stdio.h>

int main (){
	int Casos,Cont,Cont2,TotJog,Players[11];
	scanf("%d",&Casos);
	for(Cont=0;Cont<Casos;Cont++){
		scanf("%d",&TotJog);
		for(Cont2=0;Cont2<TotJog;Cont2++)
			scanf("%d",&Players[Cont2]);
		printf("Case %d: %d\n",Cont+1,Players[(TotJog/2)]);
	}
	return 0;
