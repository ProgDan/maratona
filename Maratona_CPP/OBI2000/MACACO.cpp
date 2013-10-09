/* 
 * File:   MACACO.cpp
 * Author: progdan
 * 
 * Solucao para o problema "Macaco" da OBI2000
 *
 * Created on October 9, 2013, 10:28 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  int n = 1;
  while (true){
      // lê número de regiões
      int N;
      cin >> N;
      if (!N) break;

      // lê as regiões e encontra melhor solução
      int X = -1000000000, Y = 1000000000, 
        U = 1000000000, V = -1000000000;
      while (N > 0)
        {
          int a,b,c,d;
          cin >> a >> b >> c >> d;
          if (a > X) X = a;
          if (b < Y) Y = b;
          if (c < U) U = c;
          if (d > V) V = d;
          N--;
        }

      // Exibe a Solução
      if (U < X || Y < V)
        cout << "Teste " << n++ << endl << "nenhum" << endl;
      else
        cout << "Teste " << n++ << endl
             << X << " " << Y << " "
             << U << " " << V << endl;
      cout << endl;
    }

    return 0;
}
