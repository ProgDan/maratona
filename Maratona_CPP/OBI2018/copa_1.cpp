// Guilherme A. Pinto, OBI-2018, campeonato

#include <bits/stdc++.h>
using namespace std;

string fase[4] {"final", "semifinal", "quartas", "oitavas" };
int A, B;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> A;
  cin >> B;
  A += 15;
  B += 15;


  int f = 4;

  while( A != B ){
    f--;
    A /= 2;
    B /= 2;
  }
  
  cout << fase[f] << endl;
  
  return 0;
}
