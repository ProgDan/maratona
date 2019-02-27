#include <stdio.h>
#include <stdlib.h>
#define MAX 100002
#define TRUE 1
#define FALSE 0

typedef struct {unsigned int ID;unsigned int Volume;} sCaracPresent;

int Compare (const void *,const void *);
int Compare2 (const void *,const void *);

int main (){
  unsigned short int T,Cont;
  unsigned int NumGiftBru, NumGiftNoel, Cont2, Altura, Largura, Comprimento;
  sCaracPresent Presente[MAX];
  scanf("%hu",&T);
  for(Cont=0;Cont<T;Cont++){
    scanf("%u%u", &NumGiftNoel, &NumGiftBru);
    for(Cont2=0;Cont2<NumGiftNoel;Cont2++){
      scanf("%u%u%u%u",&Presente[Cont2].ID, &Altura, &Largura, &Comprimento);
      Presente[Cont2].Volume = Altura * Largura * Comprimento;
    }
    qsort(Presente,NumGiftNoel,sizeof(sCaracPresent),Compare);
    qsort(Presente,NumGiftBru,sizeof(sCaracPresent),Compare2);
    for(Cont2=0;Cont2<NumGiftBru;Cont2++){
      printf("%d",Presente[Cont2].ID);
      if(Cont2!=(NumGiftBru-1))
        printf(" ");
      else
        puts("");
    }
  }

  return 0;
}

int Compare (const void *p1,const void *p2){
  sCaracPresent *i  = (sCaracPresent *)p1, *j = (sCaracPresent *)p2;
  if(i->Volume < j->Volume)
    return 1;
  else if (i->Volume == j->Volume){
    if(i->ID > j->ID)
      return 1;
    else
      return -1;
  }
  else
    return -1;
}

int Compare2 (const void *p1,const void *p2){
  sCaracPresent *i  = (sCaracPresent *)p1, *j = (sCaracPresent *)p2;
  if(i->ID > j->ID) return 1;
  else if (i->ID == j->ID) return 0;
  else return -1;
}
