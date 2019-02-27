#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
#define MAX_VET 1001
void LimpaBuffer(){
  while(getchar()!='\n');
  return;
}
void strrev (char* palavra, int tam){
  int cont2=0,cont;
  char invert[MAX_VET];
  for(cont=tam-1;cont>-1;cont--){
    invert[cont2]=palavra[cont];
    cont2++;
  }
  invert[cont2]='\0';
  strcpy(palavra,invert);
}

int main (){
  int NumCasos,Caso,Cont,TamPalav;
  char Palavra[MAX_VET];
  scanf("%d",&NumCasos);
  LimpaBuffer();
  for(Caso=0;Caso<NumCasos;Caso++){
    fgets(Palavra,MAX_VET,stdin);
    for(Cont=0;Palavra[Cont]>= ' ';Cont++);
    Palavra[Cont]= '\0';
    TamPalav=strlen(Palavra);
    strrev(Palavra,TamPalav);
    for(Cont=0;Cont<TamPalav;Cont++){
      if(isalpha(Palavra[Cont])!=FALSE)
        Palavra[Cont]=Palavra[Cont]+3;
      if(Cont>=TamPalav/2)
        Palavra[Cont]=Palavra[Cont]-1;
    }
    printf("%s\n",Palavra);
  }

  return 0;
}
