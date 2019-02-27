#include <stdio.h>
#include <stdlib.h>

int main (){
  int Cases, TotCases, Num1, Num2, Mod1, Mod2, bolean;
  scanf("%d",&TotCases);
  for(Cases=0;Cases<TotCases;Cases++){
    bolean = 0;
    scanf("%d%d",&Num1,&Num2);
    while(Num2 != 0 ){
      Mod1 = Num1 % 10;
      Mod2 = Num2 % 10;
      Num1 = Num1 / 10;
      Num2 = Num2 / 10;
      if(Mod1 != Mod2){
        printf("nao encaixa\n");
        bolean = 1;
        break;
      }
    }
    if(bolean != 1) printf("encaixa\n");
  }

  return 0;
}
