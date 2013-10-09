/* 
 * File:   SALDO.cpp
 * Author: progdan
 * 
 * Solução para o problema "Saldo de Gols" da OBI2000
 *
 * Created on October 9, 2013, 10:57 AM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

int main(int argc, char** argv) {
  int n = 1;
  while (true)
    {
      // Lê o número de partidas realizadas
      int N;
      cin >> N;
      if (!N) break;

      // lê resultados e encontra solução
      int melhor_soma = -1;
      int I, J;
      int de = 1, soma = 0;
      for (int partida = 1 ; partida <= N; partida ++)
        {
          int X, Y;
          cin >> X >> Y;
          soma += X - Y;
          if (soma < 0) 
            {
              de = partida + 1;
              soma = 0;
            }
          else if (soma > 0 && 
                   (soma > melhor_soma || 
                    (soma == melhor_soma && 
                     partida-de >= J-I)
                    ) )
            {
              melhor_soma = soma;
              I = de;
              J = partida;
            }
        }

      // Exibe a solução
      cout << "Teste " << n++ << endl;
      if (melhor_soma == -1)
        cout << "nenhum" << endl;
      else
        cout << I << " " << J << endl;
      cout << endl;
    }
    return 0;
}

