#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX_VET 301

typedef struct regSubmission {char LetraProblem; int Time; char Judge[11];} tSubmission;
typedef struct regDescrit {tSubmission Submissoes[MAX_VET];char Corrects[26]; int Qtd, TimeTot, Aceitos;} tTeamSubmissions;

void IniciaSubs (tTeamSubmissions *);
void CalcPonts (tTeamSubmissions *);
void IncluiSub (tTeamSubmissions *, tSubmission );
void CalcIncorrects (tTeamSubmissions *, tSubmission );


int main (){
  int Cont, QtdeSubs;
  tTeamSubmissions TeamSubs;
  tSubmission Sub;
  scanf("%d",&QtdeSubs);
  while(QtdeSubs != 0){
    IniciaSubs(&TeamSubs);
    for(Cont=0;Cont<QtdeSubs;Cont++){
      scanf(" %c%d%s",&Sub.LetraProblem,&Sub.Time,Sub.Judge);
      IncluiSub(&TeamSubs,Sub);
    }
    CalcPonts(&TeamSubs);
    printf("%d %d\n",TeamSubs.Aceitos, TeamSubs.TimeTot);
    scanf("%d",&QtdeSubs);
  }

  return 0;
}

void CalcPonts (tTeamSubmissions *listasubs){
  int cont, cont2, bolean;
  for(cont=0;cont<listasubs->Qtd;cont++){
    bolean = FALSE;
    if(strcmp(listasubs->Submissoes[cont].Judge,"correct")==0){
      for(cont2=0;cont2 <= listasubs->Aceitos; cont2++){
        if(listasubs->Corrects[cont2] == listasubs->Submissoes[cont].LetraProblem)
          break;
        else if(listasubs->Corrects[cont2] == 0){
          listasubs->Corrects[cont2] =  listasubs->Submissoes[cont].LetraProblem;
          bolean = TRUE;
        }
      }
      if(bolean == TRUE){
        listasubs->TimeTot = listasubs->TimeTot + listasubs->Submissoes[cont].Time;
        listasubs->Aceitos = listasubs->Aceitos + 1;
        CalcIncorrects(listasubs,listasubs->Submissoes[cont]);
      }
    }
  }
}

void CalcIncorrects (tTeamSubmissions *listasubs, tSubmission sub){
  int incorrects, cont;
  incorrects = 0;
  for(cont=0;cont<listasubs->Qtd;cont++)
    if(strcmp(listasubs->Submissoes[cont].Judge,"incorrect")==0)
      if(sub.LetraProblem == listasubs->Submissoes[cont].LetraProblem)
        incorrects++;
  listasubs->TimeTot = listasubs->TimeTot + (incorrects*20);
}

void IncluiSub (tTeamSubmissions *listasubs, tSubmission submission){
  listasubs->Submissoes[listasubs->Qtd] = submission;
  listasubs->Qtd++;
}

void IniciaSubs (tTeamSubmissions *listasubs){
  listasubs->Qtd = 0;
  listasubs->TimeTot = 0;
  listasubs->Aceitos = 0;
  memset(listasubs->Corrects,0,sizeof(listasubs->Corrects));
}
