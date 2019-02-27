#include <stdio.h>
#include <math.h>

int main (){
  unsigned int Casos, Cont, KmAv, QtdRadar;
  double KmRad, QtdRadFloat;
  scanf("%u",&Casos);
  for(Cont=0;Cont<Casos;Cont++){
    scanf("%u%lf",&KmAv,&KmRad);
    QtdRadFloat= KmAv / KmRad;
    QtdRadar=(int)QtdRadFloat;
    if(QtdRadFloat>QtdRadar) QtdRadar++;
    printf("%d\n",QtdRadar);
  }
  return 0;
}
