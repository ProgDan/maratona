#include <stdio.h>
#include <math.h>

int main (){
  int N, Cont;
  unsigned long long int Result,Num;
  scanf("%d",&N);
  for(Cont=0;Cont<N;Cont++){
    scanf("%lld",&Num);
    if(Num%4==0 || Num==0) printf("1\n",Result);
		else if(Num%4==3) printf("3\n",Result);
		else if(Num%4==2) printf("9\n",Result);
		else if(Num%4==1) printf("7\n",Result);
  }
  return 0;
}
