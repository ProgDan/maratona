/* 
 * File:   SORVETE.c
 * Author: progdan
 * 
 * Solução para o problema "Sorvete" da OBI2001
 *
 * Created on October 9, 2013, 7:50 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define MAX_SORVETEIROS 10001

struct Intervalo {
  int U ,V;
};

void ordena_pelo_U(struct Intervalo * v, int n) {
  int i, j;
  struct Intervalo temp;
  for (i=1; i < n; i++)
    for (j=i; j > 0 && v[j].U < v[j-1].U; j--)
    {
      temp = v[j];
      v[j] = v[j-1];
      v[j-1] = temp;
    }
}

int main(int argc, char** argv) {
    struct Intervalo sorveteiros[MAX_SORVETEIROS];
    int S, inicio, fim, i, P, n=1;

    while (scanf("%d %d",&P,&S) == 2 && P+S > 0)
    {
      for (i=0; i < S; i++)
        scanf("%d %d",&sorveteiros[i].U,&sorveteiros[i].V);
      ordena_pelo_U(sorveteiros,S);  
      inicio = sorveteiros[0].U;
      fim = sorveteiros[0].V;
      printf("Teste %d\n",n++);
      for (i=1; i < S; i++)
      {
        while (i < S && sorveteiros[i].U <= fim)
        {
          if (sorveteiros[i].V > fim)
            fim = sorveteiros[i].V;
          i++;  
        }
        printf("%d %d\n",inicio,fim);
        inicio = sorveteiros[i].U;
        fim = sorveteiros[i].V;
      }
      // O último sorveteiro constitui um intervalo sozinho
      if (i == S)
        printf("%d %d\n",inicio,fim);
      printf("\n");
    }  

    return (EXIT_SUCCESS);
}

