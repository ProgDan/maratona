#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
  char Alfa[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",String0[51];
  int Cont,N,NLin,Cont2,Lim,Cont3,Cont4,Som=0,Cond=0;
  scanf("%d",&N);
  for(Cont=1;Cont<=N;Cont++){
    scanf("%d",&NLin);
    Som=0;
    for(Cont2=0;Cont2<NLin;Cont2++){
      scanf("%s",String0);
      Lim=strlen(String0)-1;
      Cont4=0;
      for(Cont3=0;Cont3<=Lim;Cont3++)
      {
        Cond=0;
        while(Cond!=1){
          if(strncmp(&String0[Cont3],&Alfa[Cont4],1)==0){
            Som=Som+Cont4;
            Som=Som+Cont3;
            Som=Som+Cont2;
            Cond=1;
            Cont4=0;
          }
          else
            Cont4++;
        }
      }
    }
    printf("%d\n",Som);
  }
  return 0;
}
