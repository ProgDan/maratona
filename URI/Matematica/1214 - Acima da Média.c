#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
	int Media, QtdAcima, Cont, Soma, TotCasos, Caso, TotAlunos, TotNotasAlu[1000];
	double PorcenAcima;
	scanf("%d",&TotCasos);
	for(Caso=0;Caso < TotCasos; Caso++){
		scanf("%d",&TotAlunos);
		Soma = 0;
		for(Cont = 0;Cont < TotAlunos; Cont ++){
			scanf("%d",&TotNotasAlu[Cont]);
			Soma = Soma + TotNotasAlu[Cont];
		}
		QtdAcima = 0;
		Media = Soma / TotAlunos;
		for(Cont = 0;Cont < TotAlunos; Cont ++){
			if(TotNotasAlu[Cont] > Media)
				QtdAcima++;
		}
		PorcenAcima = (double) (QtdAcima * 100.0) / TotAlunos ;
		printf("%.3lf%%\n",PorcenAcima);
	}
	return 0;
}
