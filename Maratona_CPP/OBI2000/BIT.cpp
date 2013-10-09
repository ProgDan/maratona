/* 
 * File:   BIT.cpp
 * Author: progdan
 *
 * Solução para o problema "Bit" da OBI2000
 * 
 * Created on October 9, 2013, 9:54 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int n = 1;
  while (true){
      // lê o conjunto de teste V
      int V;
      cin >> V;
      if (!V) break;

      // Encontra a solução
      int L = 0,  // Notas de B$1
          K = 0,  // Notas de B$5
          J = 0,  // Notas de B$10
          I = 0;  // Notas de B$50

      I = V / 50;
      V %= 50;
      J = V / 10;
      V %= 10;
      K = V / 5;
      V %= 5;
      L = V;

      // Exibe a Solução
      cout << "Teste " << n++ << endl;
      cout << I << " " << J << " " 
           << K << " " << L << endl;
      cout << endl;
    }

    return 0;
}
