#include <stdio.h>

int main (){
  int Min,MinGift1,MinGift2;
  scanf("%d%d%d",&Min,&MinGift1,&MinGift2);
  if(MinGift1+MinGift2<=Min)
    printf("Farei hoje!\n");
  else
    printf("Deixa para amanha!\n");
  return 0;
}
