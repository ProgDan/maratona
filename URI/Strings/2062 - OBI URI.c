#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main (){
	char Palav[21];
	int N,Cont,TamPal;
	scanf("%d",&N);
	for(Cont=1;Cont<=N;Cont++){
		scanf("%s",Palav);
		TamPal=strlen(Palav);
		if(TamPal==3){
			if(strncmp(Palav,"UR",2)==0 || strncmp(Palav,"OB",2)==0)
				Palav[2]='I';
		}
		if(Cont<N){
			printf("%s ",Palav);
		}
		else
			printf("%s\n",Palav);
	}
	return 0;
}
