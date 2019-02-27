#include <stdio.h>
#include <math.h>

int main (){
  int NumQuadra, NumTotQuadra;
  while(1){
    scanf("%d",&NumQuadra);
    if(NumQuadra==0) break;
    NumTotQuadra = (2*(pow(NumQuadra,3)) - 3*(pow(NumQuadra,2)) + NumQuadra);
    NumTotQuadra = (NumTotQuadra / 6) + pow(NumQuadra,2);
    printf("%d\n",NumTotQuadra);
  }
  return 0;
}
