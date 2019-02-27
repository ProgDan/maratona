#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {char NomCarn[21];int Qtd;} sCarnes;

int compara ( const void *, const void * ) ;

int main (){
  sCarnes tCarnes[10];
  int N,Cont;
  while(scanf("%d",&N)!=EOF){
    for(Cont=0;Cont<N;Cont++)
      scanf("%s%d",tCarnes[Cont].NomCarn,&tCarnes[Cont].Qtd);
    qsort(tCarnes,N,sizeof(tCarnes[0]),compara);
    for(Cont=0;Cont<N;Cont++){
      if(Cont!=N-1)
        printf("%s ",tCarnes[Cont].NomCarn);
      else
        printf("%s\n",tCarnes[Cont].NomCarn);
    }

  }
  return 0;
}

int compara (const void *p1, const void *p2)
{	sCarnes *i = (sCarnes *)p1, *j = (sCarnes *)p2;
	if (i->Qtd < j->Qtd)
		return -1;
	else
		if(i->Qtd == j->Qtd)
			return strcmp(i->NomCarn,j->NomCarn);
		else
			return 1;
}
