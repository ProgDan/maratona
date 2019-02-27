#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main (){
  char Palavra[101];
  int Cont,TamPala,Cont2,TotEspac,Temp;
  while(scanf("%s",Palavra)!=EOF){
    TamPala=strlen(Palavra)-1;
    Temp=TamPala;
    TotEspac=0;
    while(TamPala!=-1){
      for(Cont2=0;Cont2<TotEspac;Cont2++)
        printf(" ");
      for(Cont=0;Cont<=TamPala;Cont++){
        if(Cont!=TamPala)
          printf("%c ",Palavra[Cont]);
        else
          printf("%c\n",Palavra[Cont]);
      }
      TamPala=TamPala-1;
      TotEspac=Temp-TamPala;
    }
    printf("\n");
  }

  return 0;
}
