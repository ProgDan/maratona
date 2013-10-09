/* 
 * File:   BIT.c
 * Author: progdan
 *
 * Solução para o problema "Bit" da OBI2000
 * 
 * Created on October 9, 2013, 10:12 AM
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

/*
 * 
 */
int main(int argc, char** argv) {
  int n = 1;
  while (TRUE){
      // lê o conjunto de teste V
      int V;
      scanf("%i", &V);
      if (!V) break;

      // Encontra a solução
      int L = 0,  // Notas de B$1
          K = 0,  // Notas de B$5
          J = 0,  // Notas de B$10
          I = 0;  // Notas de B$50

      I = V / 50;
      V %= 50;
      J = V / 10;
      V %= 10;
      K = V / 5;
      V %= 5;
      L = V;

      // Exibe a Solução
      printf("Teste %i\n", n++);
      printf("%i %i %i %i\n", I, J, K, L);
      printf("\n");
    }

    return (EXIT_SUCCESS);
}

