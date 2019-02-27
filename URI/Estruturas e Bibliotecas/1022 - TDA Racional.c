#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int MDC (int N, int D){
	if (D == 0)
	      return N;
	  else
	      return MDC(D, N % D);
}

typedef struct {int N1,D1,N2,D2;} tFrac;

void SomaFrac (tFrac *frac,int *pontN,int *pontD){
	*pontN = frac->N1 * frac->D2 + frac->N2 * frac->D1;
	*pontD = frac->D1 * frac->D2;
}

void SubFrac (tFrac *frac,int *pontN,int *pontD){
	*pontN = frac->N1 * frac->D2 - frac->N2 * frac->D1;
	*pontD = frac->D1 * frac->D2;
}

void MultFrac (tFrac *frac,int *pontN,int *pontD){
	*pontN = frac->N1 * frac->N2;
	*pontD = frac->D1 * frac->D2;
}

void DivFrac (tFrac *frac,int *pontN,int *pontD){
	*pontN = frac->N1 * frac->D2;
	*pontD = frac->N2 * frac->D1;
}

int main (){
	int N,cont,ResultN,ResultD,Mdc;
	char Express;
	tFrac Frac;
	scanf("%d",&N);
	for(cont = 0;cont < N;cont++){
		scanf("%d / %d %c %d / %d",&Frac.N1,&Frac.D1,&Express,&Frac.N2,&Frac.D2);
		if(Express=='+'){
			SomaFrac(&Frac,&ResultN,&ResultD);
		}
		if(Express=='-'){
			SubFrac(&Frac,&ResultN,&ResultD);
		}
		if(Express=='*'){
			MultFrac(&Frac,&ResultN,&ResultD);
		}
		if(Express=='/'){
			DivFrac(&Frac,&ResultN,&ResultD);
		}
		printf("%d/%d = ",ResultN,ResultD);
		Mdc = MDC(abs(ResultN),abs(ResultD));
		ResultN = ResultN / Mdc;
		ResultD = ResultD / Mdc;
		printf("%d/%d\n",ResultN,ResultD);
	}
	return 0;
}
