#include <stdio.h>
#include <string.h>

int main (){
  unsigned short int TamString, Desloca, Cont, NumCasos, Caso;
  char Palavra[52];
  scanf("%hu",&NumCasos);
  for(Caso=0 ; Caso < NumCasos ; Caso++){
    scanf("%s%hu",Palavra,&Desloca);
    TamString = strlen(Palavra);
    for( Cont=0 ; Cont < TamString ; Cont++){
      Palavra[Cont] = Palavra[Cont] - Desloca;
      if(Palavra[Cont]<65)
        Palavra[Cont]=90-(64-Palavra[Cont]);
    }
    printf("%s\n",Palavra);
  }
  return 0;
}
