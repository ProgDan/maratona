#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct regLista {char PedacDiamant;struct regLista *prox;};
typedef struct regLista tLista;

typedef struct {tLista *topo;int totdiamant;} DescPilha;

void ExcluiPedac (DescPilha *);
void IncluiPedac (DescPilha *);

void LimpaBuffer(){
  while(getchar()!='\n');
  return;
}

int main (){
  int nCaso,totCasos,Cont,Tam,c;
  char stringMinerio[1003];
  DescPilha Descript;

  scanf("%d",&totCasos);
  LimpaBuffer();
  for(nCaso=0;nCaso<totCasos;nCaso++){
    fgets(stringMinerio, 1003, stdin);
    for( c=0; stringMinerio[c] >= ' '; c++ );
    stringMinerio[c]= '.';
    stringMinerio[c+1]='\0';

    Descript.topo = NULL;
    Descript.totdiamant = 0;
    Tam=strlen(stringMinerio);
    for(Cont=0;Cont<Tam;Cont++)
    { if(stringMinerio[Cont]=='<')
        IncluiPedac(&Descript);
      else if (stringMinerio[Cont]=='>')
      { if(Descript.topo != NULL)
        { Descript.totdiamant++;
          ExcluiPedac(&Descript);
        }
        else continue;
      }
      else continue;
    }
    printf("%d\n",Descript.totdiamant);
    while(Descript.topo!=NULL) ExcluiPedac(&Descript);
  }

  return 0;
}
void IncluiPedac (DescPilha *descritor){
    tLista *aux;
    aux = (tLista *) malloc(sizeof(tLista));
    aux->PedacDiamant = '<';
    aux->prox = descritor->topo;
    descritor->topo = aux;
}

void ExcluiPedac (DescPilha *descritor){
    tLista *aux;
    aux = descritor->topo;
    descritor->topo = descritor->topo->prox;
    free(aux);
}
