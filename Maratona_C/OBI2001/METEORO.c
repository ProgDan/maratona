/* 
 * File:   METEORO.c
 * Author: progdan
 *
 * Solução para o problema "Meteoros" da OBI2001
 * 
 * Created on October 9, 2013, 3:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int main(int argc, char** argv) {
	int n=1;
	int N, X, Y;
	int X1, Y1, X2, Y2;
	int i, total;

	while (TRUE) {
		// Lê fazenda
		scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
		if (X1 == 0 && Y1 == 0) break;
		scanf("%d", &N);
		total = 0;
		
		// Le meteoritos
		for (i=0; i<N; i++) {
			scanf("%d %d", &X, &Y);
			if (X >= X1 && X <=X2 && Y <= Y1 && Y >= Y2)
				total++;
		}
		printf("Teste %d\n%d\n\n", n++, total);
	}
    return (EXIT_SUCCESS);
}
