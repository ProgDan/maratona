#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STR 100008

struct tChar{struct tChar *Prox;int Indic;};
typedef struct tChar regChar;
typedef struct {regChar *Inicio,*Final;int TamStr;} regDescritor;

void IncluiHOME (regDescritor *, int);
void IncluiEND (regDescritor *, int);
void ImprimeStr (regDescritor *, char *);
void IniciaDescrit (regDescritor *);
void ExcluiHOME(regDescritor *);
void TiraEnter(char *);

int main (){
	char Texto[MAX_STR];
	int Cont;
	regDescritor Descritor;
	while(fgets(Texto,MAX_STR,stdin) != NULL){
		TiraEnter(Texto);
		IniciaDescrit(&Descritor);
		if(Texto[0] != '[' && Texto[0] != ']') IncluiHOME(&Descritor,0);
		Descritor.TamStr = strlen(Texto);
		for(Cont=0; Cont < Descritor.TamStr; Cont++){
			if(Texto[Cont] == '[' && Texto[Cont+1]!= ']' && Texto[Cont+1]!= '[' && Texto[Cont+1] != '\0'){
				IncluiHOME(&Descritor,Cont+1);
			}
			else if(Texto[Cont] == ']' && Texto[Cont+1]!= ']' && Texto[Cont+1]!= '['  && Texto[Cont+1] != '\0'){
				IncluiEND(&Descritor,Cont+1);
			}
		}
		ImprimeStr(&Descritor,Texto);
	}
	return 0;
}

void ImprimeStr (regDescritor *descrit, char *texto){
	regChar *aux;
	int cont;
	aux = descrit->Inicio;
	while(aux != NULL){
		for(cont=aux->Indic; texto[cont] != '[' && texto[cont] != ']' && texto[cont] != '\0'; cont++){
			printf("%c",texto[cont]);
		}
		ExcluiHOME(descrit);
		aux = descrit->Inicio;
	}
	puts("");
}

void IncluiHOME (regDescritor *descrit, int indic){
	regChar *aux;
	aux = (regChar*) malloc(sizeof(regChar));
	aux->Indic = indic;
	aux->Prox = descrit->Inicio;
	descrit->Inicio = aux;
	if(descrit->Final == NULL) descrit->Final = aux;
}

void IncluiEND (regDescritor *descrit, int indic){
	regChar *aux;
	aux = (regChar*) malloc(sizeof(regChar));
	aux->Indic = indic;
	aux->Prox = NULL;
	if(descrit->Final != NULL)
		descrit->Final->Prox = aux;
	else
		descrit->Inicio = aux;
	descrit->Final = aux;
}

void IniciaDescrit (regDescritor *descrit){
	descrit->Inicio = NULL;
	descrit->Final = NULL;
}

void ExcluiHOME(regDescritor *descrit){
  regChar *aux;
  aux = descrit->Inicio;
	descrit->Inicio = aux->Prox;
  free(aux);
}

void TiraEnter(char *texto){
  int c;
  for( c=0; texto[c] >= ' '; c++ );
  texto[c]= '\0';
}
