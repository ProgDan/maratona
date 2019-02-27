#include <stdio.h>
#include <string.h>
#include <ctype.h>

void LimpaBuffer();
void TiraEnter(char *);

int main (){
  int Casos, Case, Cont, Cont2;
  char String[53],String2[53];
  scanf("%d",&Casos);
  LimpaBuffer();
  for(Case=0; Case<Casos; Case++){
    fgets(String,53,stdin);
    TiraEnter(String);
    Cont = 0; Cont2 = 0;
    if(isalpha(String[Cont2])){
      String2[Cont] = String[Cont2];
      Cont++; Cont2++;
    }
    while(String[Cont2] != '\0'){
      if(isspace(String[Cont2]) && isalpha(String[Cont2+1])){
        Cont2++;
        String2[Cont] = String[Cont2];
        Cont++;
      }
      Cont2++;
    }
    String2[Cont]= '\n';
    String2[Cont+1]= '\0';
    printf("%s",String2);
  }
  return 0;
}

void LimpaBuffer(){
  while(getchar()!='\n');
  return;
}

void TiraEnter(char *texto){
  int c;
  for( c=0; texto[c] >= ' '; c++ );
  texto[c]= '\0';
}
