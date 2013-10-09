/* 
 * File:   QUERM.cpp
 * Author: progdan
 * 
 * Solução para o problema "Quermesse" da OBI2000
 *
 * Created on October 9, 2013, 10:40 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int n = 1;
  while (true){
      // lê número de participantes da festa
      int N;
      cin >> N;
      if (!N) break;

      // lê entrada e encontra solução
      int ganhador = -1;
      int posicao = 1;
      while (posicao <= N)
        {
          int ingresso;
          cin >> ingresso;
          if (posicao == ingresso) 
            {
              if (ganhador != -1)
                cerr << "*** + de uma solução" << endl;
              else
                ganhador = posicao;
            }
          posicao++;
        }

      // Exibe a Solução
      cout << "Teste " << n++ << endl;
      cout << ganhador << endl;
      cout << endl;
    }

    return 0;
}
