#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_VET 1000
#define TRUE 1
#define FALSE 0

typedef struct {char Nome[50],HabayFriend[4];int TamNome,Ordem;} regInscrit;
typedef struct {regInscrit InscritYES[MAX_VET], InscritNO[MAX_VET], Maior; int QtdYES,QtdNO;} regDescrit;

int compare (const void *, const void *);
int ValidInscrit (regDescrit *, regInscrit);
void IncluiInscrit (regDescrit *, regInscrit);
void IniciaList (regDescrit *);
void ImprimeList (regDescrit *);

int main (){
  regInscrit Inscrito;
  regDescrit Descritor;
  IniciaList(&Descritor);
  while(1){
    scanf("%s",Inscrito.Nome);
    if(strcmp(Inscrito.Nome,"FIM") != 0){
      scanf("%s",Inscrito.HabayFriend);
      IncluiInscrit(&Descritor, Inscrito);
    }
    else break;
  }
  qsort(Descritor.InscritYES,Descritor.QtdYES,sizeof(regInscrit),compare);
  qsort(Descritor.InscritNO,Descritor.QtdNO,sizeof(regInscrit),compare);
  ImprimeList(&Descritor);
  return 0;
}

int compare (const void *p1, const void *p2){
  regInscrit *i = (regInscrit *) p1, *j = (regInscrit *) p2;
  return strcmp(i->Nome,j->Nome);
}

void IniciaList (regDescrit *descrit){
  descrit->QtdYES = 0;
  descrit->QtdNO = 0;
  descrit->Maior.TamNome = 0;
  descrit->Maior.Ordem = 1000;
  strcpy(descrit->Maior.Nome,"");
}

void IncluiInscrit (regDescrit *descrit, regInscrit inscrit){
  inscrit.TamNome = strlen(inscrit.Nome);
  if(strcmp(inscrit.HabayFriend,"YES") == 0 && ValidInscrit(descrit,inscrit) == TRUE){
    descrit->InscritYES[descrit->QtdYES] = inscrit;
    descrit->InscritYES[descrit->QtdYES].Ordem = descrit->QtdYES+1;
    descrit->QtdYES++;
    if(descrit->InscritYES[descrit->QtdYES-1].TamNome > descrit->Maior.TamNome)
      descrit->Maior = descrit->InscritYES[descrit->QtdYES-1];
    else if(descrit->InscritYES[descrit->QtdYES-1].TamNome == descrit->Maior.TamNome && descrit->InscritYES[descrit->QtdYES-1].Ordem < descrit->Maior.Ordem)
      descrit->Maior = descrit->InscritYES[descrit->QtdYES-1];
  }
  else if(strcmp(inscrit.HabayFriend,"NO") == 0){
    descrit->InscritNO[descrit->QtdNO] = inscrit;
    descrit->InscritNO[descrit->QtdNO].Ordem = descrit->QtdNO+1;
    descrit->QtdNO++;
  }
}

int ValidInscrit (regDescrit *descrit,regInscrit inscrit){
  int cont;
  for(cont=0;cont<descrit->QtdYES;cont++)
    if(strcmp(descrit->InscritYES[cont].Nome,inscrit.Nome) == 0)
      return FALSE;
  return TRUE;
}

void ImprimeList (regDescrit *descrit){
  int cont;
  for(cont=0;cont<descrit->QtdYES;cont++)
    printf("%s\n",descrit->InscritYES[cont].Nome);
  for(cont=0;cont<descrit->QtdNO;cont++)
    printf("%s\n",descrit->InscritNO[cont].Nome);
  printf("\nAmigo do Habay:\n%s\n",descrit->Maior.Nome);
}
