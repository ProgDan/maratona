#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct {int N1,D1,N2,D2;} tFrac;
void SomaFrac (tFrac *frac,int *pontN,int *pontD){
	*pontN = frac->N1 * frac->D2 + frac->N2 * frac->D1;
	*pontD = frac->D1 * frac->D2;
}
int MDC (int N, int D){
	if (D == 0)
	      return N;
	  else
	      return MDC(D, N % D);
}
int main (){
  int ResultN,ResultD,Mdc;
  tFrac Frac;
  scanf("%d %d %d %d",&Frac.N1,&Frac.D1,&Frac.N2,&Frac.D2);
  SomaFrac(&Frac,&ResultN,&ResultD);
  Mdc = MDC(abs(ResultN),abs(ResultD));
  ResultN = ResultN / Mdc;
  ResultD = ResultD / Mdc;
  printf("%d %d\n",ResultN,ResultD);

  return 0;
}
