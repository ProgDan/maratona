#include <stdio.h>

int main ()
{
	int N,M,Cont,Som=0;
	scanf("%d%d",&N,&M);
	while(N>0 && M>0)
	{
		Som=0;
		if(N==M)
			printf("%d ",N);
		else
		{
			if(N>M)
			{
				for(Cont=M;Cont<=N;Cont++)
				{
					printf("%d ",Cont);
					Som=Som+Cont;
				}
			}
			if(M>N)
			{
				for(Cont=N;Cont<=M;Cont++)
				{
					printf("%d ",Cont);
					Som=Som+Cont;
				}
			}
		}
		printf ("Sum=%d\n",Som);
		scanf("%d%d",&N,&M);
	}
	
	return 0;
}