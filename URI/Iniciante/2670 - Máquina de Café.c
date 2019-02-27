#include <stdio.h>
#include <math.h>

int main (){
  int Andar[3],Result[3],Cont;
  for(Cont=0;Cont<3;Cont++)
    scanf("%d",&Andar[Cont]);
  Result[0]=Andar[2]*4 + Andar[1]*2;
  Result[1]=Andar[0]*2 + Andar[2]*2;
  Result[2]=Andar[0]*4 + Andar[1]*2;
  if(Result[1]<=Result[0] && Result[1]<=Result[2])
    printf("%d\n",Result[1]);
  else if(Result[2]<=Result[0] && Result[2]<=Result[1])
    printf("%d\n",Result[2]);
  else if(Result[0]<Result[1] && Result[0]<Result[2])
    printf("%d\n",Result[0]);
  return 0;
}
