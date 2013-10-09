/* 
 * File:   OBIDOMIN.c
 * Author: progdan
 *
 * Solução para o problema "Dominó" da OBI2001
 * 
 * Created on October 9, 2013, 7:27 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1

int grafo[7][7];
int marc[7], grau[7];

int bp(int p) {
  int q;
  marc[p] = 1;
  for (q=0; q < 7; q++)
    if (grafo[p][q] && !marc[q])
      bp(q);
}

int grafo_conexo(void) {
  int p;
  memset(marc,0,sizeof(marc));
  for (p=0; p < 7 && grau[p] == 0; p++);
  bp(p);
  for (p=0; p < 7; p++)
    if (grau[p] > 0 && !marc[p])
      return 0;
  return 1;    
}

int main(int argc, char** argv) {
    int N, p, X, Y, n_impares, n=1;

    while (scanf("%d",&N) == 1 && N > 0)
    {
      memset(grau,0,sizeof(grau));
      memset(grafo,0,sizeof(grafo));
      for (p=0; p < N; p++)
      {
        scanf("%d %d",&X,&Y);
        grau[X]++;
        grau[Y]++;
        grafo[X][Y] = grafo[Y][X] = 1;
      }
      n_impares = 0;
      for (p=0; p <= 6; p++)
        n_impares += grau[p]%2;
      if (n_impares > 2 || !grafo_conexo())
        printf("Teste %d\nnao\n\n",n++);
      else
        printf("Teste %d\nsim\n\n",n++);  
    }
    return (EXIT_SUCCESS);
}
