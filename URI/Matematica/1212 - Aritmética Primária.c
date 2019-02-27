#include <stdio.h>
#include <stdlib.h>

int main (){
	int Num1, Num2, TotCarrys, Soma, aux1, aux2;
	scanf("%d%d",&Num1,&Num2);
	while(Num1 != 0 || Num2 != 0){
		TotCarrys = 0;
		aux1 = Num1%10;
		aux2 = Num2%10;
		while(Num1 != 0 || Num2 != 0){
			Soma = aux1 + aux2;
			Num1=Num1/10;
			Num2=Num2/10;
			aux1 = Num1%10;
			aux2 = Num2%10;
			if(Soma > 9){
				TotCarrys++;
				if(Num1 > Num2) aux1++;
				else aux2++;
			}
		}
		if(TotCarrys != 0){
			if(TotCarrys==1)
				printf("1 carry operation.\n");
			else
				printf("%d carry operations.\n",TotCarrys);
		}
		else if(TotCarrys==0) printf("No carry operation.\n");
		scanf("%d%d",&Num1,&Num2);
	}
	return 0;
}
