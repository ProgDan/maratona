#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Compare(const void *,const void *);
struct Corrida {int NumCarro;long long int Tempo;};
int main (){
  int NumCarros,Voltas,N,Cont,Temp,Cont2;
  struct Corrida Carros[100];
  scanf("%d%d",&NumCarros,&Voltas);
  for(Cont=0;Cont<NumCarros;Cont++){
    Carros[Cont].NumCarro=Cont+1;
    Carros[Cont].Tempo=0;
    for(Cont2=0;Cont2<Voltas;Cont2++){
      scanf("%d",&Temp);
      Carros[Cont].Tempo=Carros[Cont].Tempo+Temp;
    }
  }
  qsort(Carros,NumCarros,sizeof(Carros[0]),Compare);
  for(Cont=0;Cont<3;Cont++)
    printf("%d\n",Carros[Cont].NumCarro);
  return 0;
}
int Compare(const void *p1,const void *p2){
    struct Corrida *i = (struct Corrida*)p1, *j = (struct Corrida*)p2;
    if(i->Tempo < j->Tempo)
      return -1;
    else
      if(i->Tempo == j->Tempo)
        return 0;
      else
        return 1;
}
