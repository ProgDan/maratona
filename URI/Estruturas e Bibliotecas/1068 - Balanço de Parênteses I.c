#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

struct regLista {char ParentAbrt;struct regLista *prox;};
typedef struct regLista tLista;
typedef struct {tLista *topo;} DescPilha;
void Push (DescPilha *);
void Put (DescPilha *);

int main (){
  int Cont,TamStr,Bolean;
  char Expr[1002];
  DescPilha Descritor;
  while(scanf("%s",Expr)!=EOF){
    Bolean=TRUE;
    TamStr=strlen(Expr);
    Descritor.topo=NULL;
    for(Cont=0;Cont<TamStr;Cont++){
      if(Expr[Cont]==')'){
        if(Descritor.topo != NULL)
          Push (&Descritor);
        else{
          Bolean=FALSE;
          break;
        }
      }
      else if (Expr[Cont]=='(')
        Put (&Descritor);
      else continue;
    }
    if(Descritor.topo!=NULL) Bolean = FALSE;

    if(Bolean==TRUE) printf("correct\n");
    else printf("incorrect\n");

    while(Descritor.topo != NULL) Push (&Descritor);

  }
  return 0;
}

void Push (DescPilha *descritor){
    tLista *aux;
    aux = descritor->topo;
    descritor->topo = descritor->topo->prox;
    free(aux);
}
void Put (DescPilha *descritor){
    tLista *aux;
    aux = (tLista *) malloc(sizeof(tLista));
    aux->ParentAbrt = '(';
    aux->prox = descritor->topo;
    descritor->topo = aux;
}
