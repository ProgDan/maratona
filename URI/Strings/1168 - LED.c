#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main (){
  char Num[105];
  int N,cont,Led,cont2,Tam;
  scanf("%d",&N);
  for(cont=0;cont<N;cont++){
    scanf("%s",Num);
    Tam=strlen(Num);
    Led=0;
    for(cont2=0;cont2<Tam;cont2++){
      if(Num[cont2]=='1' || Num[cont2]=='4' || Num[cont2]=='7' || Num[cont2]=='8'){
        if(Num[cont2]=='1')
          Led=Led+2;
        if(Num[cont2]=='4')
          Led=Led+4;
        if(Num[cont2]=='7')
          Led=Led+3;
        if(Num[cont2]=='8')
          Led=Led+7;
      }
      else{
        if(Num[cont2]=='2' || Num[cont2]=='3' || Num[cont2]=='5')
          Led=Led+5;
        else
          if(Num[cont2]=='6' || Num[cont2]=='9' || Num[cont2]=='0')
            Led=Led+6;
      }
    }
    printf("%d leds\n",Led);
  }
  return 0;
}
