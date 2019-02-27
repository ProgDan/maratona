#include <stdio.h>
#include <stdlib.h>
#define OFF 0
#define ON 1

struct regFuncio {struct regFuncio *Ant; int CodFuncio,Remove; struct regFuncio *Prox;};
typedef struct regFuncio tFuncio;

typedef struct {int Qtd; tFuncio *Inicio,*Final;} tDescript;

int ExcluiFuncio(tDescript *, int, int, int *, int *);
void IncluiFuncionario (tDescript *, int);
void InicializaLista (tDescript *);

int main (){
  int N, K, M, Cont, FuncioK=0, FuncioM=0, TotRemov=0;
  tDescript Descript;
  while(1){
    scanf("%d%d%d",&N,&K,&M);
    if(N==0 && K==0 && M==0) break;
    InicializaLista(&Descript);
    for(Cont=1;Cont<=N;Cont++)
      IncluiFuncionario(&Descript,Cont);
    while(Descript.Qtd > 0){
      TotRemov=ExcluiFuncio(&Descript,K,M,&FuncioK,&FuncioM);
      if(TotRemov < 2) printf("%3d",FuncioM);
      else printf("%3d%3d",FuncioK,FuncioM);
      if(Descript.Qtd == 0) puts("");
      else printf(",");
    }

  }
  return 0;
}

int ExcluiFuncio(tDescript *descrit, int norHor,int antHor,int *funcK,int *funcM){
  tFuncio *auxK, *auxM, *ant, *prox;
  int cont;
  auxK = descrit->Inicio;
  auxM = descrit->Final;
  for(cont=1;cont<norHor;cont++)
    auxK = auxK->Prox;
  for(cont=1;cont<antHor;cont++)
    auxM = auxM->Ant;

  if(auxK == auxM){
    ant = auxM->Ant;
    prox = auxM->Prox;
    ant->Prox = auxM->Prox;
    prox->Ant = auxM->Ant;
    *funcM = auxM->CodFuncio;
    free(auxM);
    descrit->Qtd = descrit->Qtd - 1;
    descrit->Final = ant;
    descrit->Inicio = prox;
    return 1;
  }
  else{
    ant = auxM->Ant;
    prox = auxM->Prox;
    ant->Prox = auxM->Prox;
    prox->Ant = auxM->Ant;
    *funcM = auxM->CodFuncio;
    free(auxM);
    descrit->Final = ant;

    ant = auxK->Ant;
    prox = auxK->Prox;
    ant->Prox = auxK->Prox;
    prox->Ant = auxK->Ant;
    *funcK = auxK->CodFuncio;
    if(descrit->Final == auxK) descrit->Final = ant;
    free(auxK);
    descrit->Qtd= descrit->Qtd - 2;
    descrit->Inicio = prox;
    return 2;
  }


}

void IncluiFuncionario(tDescript *descrit, int cod){
  tFuncio *aux;
	aux = (tFuncio *) malloc(sizeof(tFuncio));

	aux->CodFuncio = cod;
	aux->Prox = NULL;
  aux->Ant = NULL;
	if (descrit->Inicio == NULL){
		descrit->Inicio = aux;
  }
	else{
		descrit->Final->Prox = aux;
    aux->Ant = descrit->Final;
  }
	descrit->Qtd = descrit->Qtd + 1;
	descrit->Final = aux;
  descrit->Inicio->Ant = descrit->Final;
  descrit->Final->Prox = descrit->Inicio;
}


void InicializaLista (tDescript *descrit){
  descrit->Inicio = NULL;
  descrit->Final = NULL;
  descrit->Qtd = 0;
}
