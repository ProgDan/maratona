#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main (){
  char Num1[1001],Num2[1001];
  int Cont,N,M,Cond=0,Cont2,P;
  scanf("%d",&N);
  for(Cont=1;Cont<=N;Cont++){
    scanf("%s",Num1);
    scanf("%s",Num2);
    M=strlen(Num2);
    P=strlen(Num1)-M;
    if(strncmp(&Num1[P],Num2,M)==0)
      printf("encaixa\n");
    else
      printf("nao encaixa\n");
  }
  return 0;
}
