#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct regLista {char Vogal;struct regLista *Prox;};
typedef struct regLista tLista;

typedef struct {tLista *Inicio,*Final;int Qtd;} DescFila;

void Enqueue (DescFila *);
void Queue (DescFila *, char);
void InitializeQueue (DescFila *);

int main (){
  int Cont, TamStr;
  char Risada[51];
  DescFila Descritor;
  scanf("%s",Risada);
  TamStr = strlen(Risada);
  InitializeQueue(&Descritor);
  for(Cont=0;Cont<TamStr;Cont++)
    if(Risada[Cont] == 'a' || Risada[Cont] == 'e' || Risada[Cont] == 'i' || Risada[Cont] == 'o' || Risada[Cont] == 'u')
      Queue(&Descritor,Risada[Cont]);
  for(Cont=TamStr-1;Cont>=0;Cont--)
    if(Descritor.Inicio != NULL && Descritor.Inicio->Vogal == Risada[Cont])
      Enqueue(&Descritor);
  if(Descritor.Qtd == 0) printf("S\n");
  else printf("N\n");
  return 0;
}

void Enqueue (DescFila *descritor){
  tLista *aux;
  aux = descritor->Inicio;
  descritor->Inicio = descritor->Inicio->Prox;
  descritor->Qtd--;
  if( descritor->Qtd == 0 )
    descritor->Final = NULL;
  free(aux);
}

void Queue (DescFila *descritor, char vogal){
  tLista *aux;
  aux = (tLista *) malloc(sizeof( tLista ));
  aux->Vogal = vogal;
  aux->Prox = NULL;
  if( descritor->Inicio == NULL )
    descritor->Inicio = aux;
  else
    descritor->Final->Prox = aux;
  descritor->Final = aux;
  descritor->Qtd++;
}


void InitializeQueue (DescFila *descritor){
  descritor->Inicio = NULL;
  descritor->Final = NULL;
  descritor->Qtd = 0;
}
