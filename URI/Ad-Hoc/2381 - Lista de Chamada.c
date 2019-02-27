#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct MatrixString {char NomeDoAluno[21];};
typedef struct MatrixString MtxString;
int Compare(const void *,const void *);
int main (){
  int NumL,SortL,Cont;
  MtxString ListCham[100];
  scanf("%d%d",&NumL,&SortL);
  for(Cont=0;Cont<NumL;Cont++)
    scanf("%s",ListCham[Cont].NomeDoAluno);
  qsort(ListCham,NumL,sizeof(ListCham[0]),Compare);
  printf("%s\n",ListCham[SortL-1].NomeDoAluno);
  return 0 ;
}
int Compare(const void *p1,const void *p2){
  MtxString *i = (MtxString*)p1, *j = (MtxString*)p2;
  return strcmp(i->NomeDoAluno, j->NomeDoAluno);
}
