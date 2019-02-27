#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Multiplos {int Num,Qtd;};
int main (){
  int N,Cont,Cont2=2,Number;
  struct Multiplos MultTotais[4];
  for(Cont=0;Cont<4;Cont++){
    MultTotais[Cont].Num=Cont2;
    MultTotais[Cont].Qtd=0;
    Cont2++;
  }
  scanf("%d",&N);
  for(Cont=0;Cont<N;Cont++){
    scanf("%d",&Number);
    for(Cont2=0;Cont2<4;Cont2++)
      if(Number%MultTotais[Cont2].Num==0)
        MultTotais[Cont2].Qtd++;
  }
  for(Cont=0;Cont<4;Cont++)
    printf("%d Multiplo(s) de %d\n",MultTotais[Cont].Qtd,MultTotais[Cont].Num);
  return 0;
}
