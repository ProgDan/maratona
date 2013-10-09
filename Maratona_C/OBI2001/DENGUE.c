/* 
 * File:   DENGUE.c
 * Author: progdan
 *
 * Solução para o problema "Dengue" da OBI2001
 *
 * Created on October 9, 2013, 7:36 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define MAX 100

int fila[MAX];
int poe, tira;

void coloca_na_fila(int n) {
    fila[poe] = n;
    poe = (poe+1) % MAX;
}

int retira_da_fila(void) {
    int n;

    n = fila[tira];
    tira = (tira+1) % MAX;
    return(n);
}


int main(int argc, char** argv) {
    int mapa[MAX][MAX];
    int num_ligacoes[MAX];
    int X, Y, k, N, restam;
    int n=1;

    while (TRUE) {
        scanf("%d", &N);
        if (N == 0) break;
        if (N == 1) {
            printf("Teste %d\n", n++);
            printf("1\n\n");
            continue;
        }
        // inicializa variáveis
        for (X=0; X<N; X++) {
            num_ligacoes[X]=0;
            for (Y=0; Y<N; Y++) 
                mapa[X][Y]=mapa[Y][X]=0;
        }
        poe=tira=0;
        // Lê as ligações
        for (k=1; k<N; k++) { 
            scanf("%d %d", &X, &Y);
            X--; Y--;
            mapa[X][Y]=mapa[Y][X]=1;
            num_ligacoes[X]++; num_ligacoes[Y]++;
        }
        // verifica quais vilas são "folhas"
        for (X=0; X<N; X++)
            if (num_ligacoes[X] == 1) {
                coloca_na_fila(X);
            }
        restam = N;
        while (restam > 1) {
            k = retira_da_fila();
            restam--;
            for (X=0; X<N; X++) 
                if (mapa[X][k]) {
                    mapa[X][k] = mapa[k][X] = 0;
                    if (--num_ligacoes[X] == 1) {
                        coloca_na_fila(X);
                    }
                }
        }
        printf("Teste %d\n", n++);
        printf("%d\n\n", 1+retira_da_fila());
    }

    return (EXIT_SUCCESS);
}

