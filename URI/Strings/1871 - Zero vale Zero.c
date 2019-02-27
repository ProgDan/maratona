#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
  int A,B,Result,Div,Cont,Mod,Cont2;
  char ForaZero[12],SemZer[12];
  scanf("%d%d",&A,&B);
  while(B != 0 && A != 0){
    Cont=0;
    Result=A+B;
    while (Result!=0) {
      Mod=Result%10;
      Result=Result/10;
      Mod=Mod+48;
      if(Mod != 48)
      {
          ForaZero[Cont]=Mod;
          Cont++;
      }
    }
    ForaZero[Cont]='\0';
    Cont=strlen(ForaZero);
    SemZer[Cont]='\0';
    Mod=Cont;
    Cont=Cont-1;
    for(Cont2=0;Cont2<Mod;Cont2++){
      SemZer[Cont2]=ForaZero[Cont];
      Cont--;
    }
    printf("%s\n",SemZer);
    scanf("%d%d",&A,&B);
  }

  return 0;
}
