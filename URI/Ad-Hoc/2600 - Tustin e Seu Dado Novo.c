#include <stdio.h>
#include <stdlib.h>

int VerifSomaLados (int *dados){
  int bolean=0;
  if(dados[0]+dados[5]!=7)
    bolean=1;
  else if(dados[1]+dados[3]!=7)
    bolean=1;
  else if(dados[2]+dados[4]!=7)
    bolean=1;
  return bolean;
}

int compara(const void *p1, const void *p2)
{	int *i = (int *)p1, *j = (int *)p2;
	if (*i < *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}
int VerifNumDifer (int *dados){
  int bolean=0,cont;
  qsort(dados, 6, sizeof(dados[0]), compara);
  for(cont=0;cont<6;cont++)
    if(dados[cont]==dados[cont+1] || dados[cont]<1 || dados[cont]>6){
      bolean=1;
      break;
    }
  return bolean;
}

int main (){
  int Dado[6],N,Cont,Cont2,Bolean;
  scanf("%d",&N);
  for (Cont=0;Cont<N;Cont++) {

    for(Cont2=0;Cont2<6;Cont2++)
      scanf("%d",&Dado[Cont2]);

    Bolean = VerifSomaLados(Dado);
    if (Bolean==0)
      Bolean=VerifNumDifer(Dado);
    if(Bolean==0)
      printf("SIM\n");
    else
      printf("NAO\n");
  }
  return 0;
}
