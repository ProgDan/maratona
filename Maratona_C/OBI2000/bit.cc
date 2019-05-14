//
// Solucao para o problema "Bit" da OBI2000
//
// (jan)
//

#include <iostream>

using namespace std;

int
main(int, char*[])
{
  int teste = 1;
  while (true)
    {
      // l� valor para este teste
      int valor;
      cin >> valor;
      if (!valor) break;

      // header
      cout << "Teste " << teste << endl;

      // encontra solu��o
      int notas1 = 0, notas5 = 0, notas10 = 0, notas50 = 0;

      notas50 = valor / 50;
      valor %= 50;
      notas10 = valor / 10;
      valor %= 10;
      notas5 = valor / 5;
      valor %= 5;
      notas1 = valor;

      // imprime solu�ao
      cout << notas50 << " " << notas10 << " " 
           << notas5 << " " << notas1 << endl;
      cout << endl;

      // vai para pr�ximo teste
      teste ++;
    }
}

