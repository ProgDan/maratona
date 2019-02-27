#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define TRUE 1

int main (){
  char D[101],S[101];
  int cont,Cond,N,M;
  while(scanf("%s%s",D,S)!=EOF){
    Cond=0;
    N=strlen(D);
    M=strlen(S);
    for(cont=0;cont<=N;cont++){
      if(strncmp(&D[cont],S,M)==0){
        Cond=TRUE;
        break;
      }
    }
    if(Cond!=TRUE)
      printf("Nao resistente\n");
    else
      printf("Resistente\n");
  }
  return 0;
}
