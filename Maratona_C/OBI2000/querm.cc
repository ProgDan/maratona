//
// Solucao para o problema "Quermesse" da OBI2000
//
// (jan)
//

#include <iostream>

using namespace std;

int main(int, char*[])
{
  int teste = 1;
  while (true)
    {
      // l� n�mero de convidados
      int convidados;
      cin >> convidados;
      if (!convidados) break;

      // header
      cout << "Teste " << teste << endl;

      // l� entrada e encontra solu��o
      int solucao = -1;
      int posicao = 1;
      while (posicao <= convidados)
        {
          int ingresso;
          cin >> ingresso;
          if (posicao == ingresso) 
            {
              if (solucao != -1)
                cerr << "*** + de uma solu��o" << endl;
              else
                solucao = posicao;
            }
          posicao ++;
        }

      // imprime solu�ao
      cout << solucao << endl;
      cout << endl;

      // vai para pr�ximo teste
      teste ++;
    }
}

