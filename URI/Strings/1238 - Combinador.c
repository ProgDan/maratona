#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define MAX_VET 53

int main (){
  int N,Cont,I,J,TamResult,TamStr1,TamStr2,Bolean;
  char string1[MAX_VET],string2[MAX_VET],Result[102];
  scanf("%d",&N);
  for(Cont=0;Cont<N;Cont++){
    scanf("%s%s",string1,string2);
    TamStr1=strlen(string1);
    TamStr2=strlen(string2);
    Bolean=FALSE;

    if(TamStr1<TamStr2)
      TamResult=TamStr1*2;
    else{
      if(TamStr1>TamStr2){
        TamResult=TamStr2*2;
        Bolean=-1;
      }
      else{
        TamResult=TamStr2*2;
        Bolean=TRUE;
      }
    }

    J=0;
    for(I=0;I<TamResult;I=I+2){
      Result[I]=string1[J];
      Result[I+1]=string2[J];
      J++;
    }
    if(Bolean==FALSE || Bolean==-1){
      if(Bolean==-1)
        for(J=J;string1[J]!='\0';J++){
          Result[I]=string1[J];
          I++;
        }
      else
        for(J=J;string2[J]!='\0';J++){
          Result[I]=string2[J];
          I++;
        }
    }
    Result[I]='\0';
    printf("%s\n",Result);
    strcpy(Result,"");
  }
  return 0;
}
