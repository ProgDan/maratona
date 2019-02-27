#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main (){
  char Palav[54];
  int Cont,Tam;
  while(gets(Palav)!=NULL){
    for (Cont=0;Palav[Cont]!='\0';Cont++) {
      if(islower(Palav[Cont])){
        if(Palav[Cont]>109)
          Palav[Cont]=Palav[Cont]-13;
        else
          Palav[Cont]=Palav[Cont]+13;
      }
      else{
        if(isupper(Palav[Cont])){
          if(Palav[Cont]>77)
            Palav[Cont]=Palav[Cont]-13;
          else
            Palav[Cont]=Palav[Cont]+13;
        }
      }
    }
    printf("%s\n",Palav);
  }
  return 0;
}
