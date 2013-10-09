/* 
 * File:   REDOTICA.cpp
 * Author: progdan
 * 
 * Solucao para o problema "Rede" da OBI2000
 *
 * Created on October 9, 2013, 10:47 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Class Vertice
 * Implementa verificação de conexão, comparando os pais atribuidos aos
 * vértices.
 */
class Vertice{
public:
  int num;

  Vertice();
  Vertice *pai();
  bool conectado(Vertice *v);
  void conecta(Vertice *v);

protected:
  Vertice *pai_direto;
};

Vertice:: Vertice() : num(0), pai_direto(0) {}  
inline Vertice *Vertice:: pai(){ 
  if (pai_direto == 0) return this; 
  pai_direto = pai_direto->pai();
  return pai_direto;
}
bool Vertice:: conectado(Vertice *v){
  return (pai() == v->pai());
}
void Vertice:: conecta(Vertice *v){
  if (pai_direto != 0) pai_direto->conecta(v->pai());
  pai_direto = v->pai();
}

/*
 * Aresta: liga dois vértices com um custo
 */
class Aresta{
public:
  Aresta(Vertice *_a, Vertice *_b, int _custo) :
    a(_a), b(_b), custo(_custo) {}
  Aresta() : a(0), b(0), custo(0) {}

  Vertice *a, *b;
  int custo;

  Aresta &operator=(const Aresta &o) { a = o.a; b = o.b; custo = o.custo; return *this;}
};
int compara_aresta(const void *_a, const void *_b){
  const Aresta *a = (const Aresta *)_a;
  const Aresta *b = (const Aresta *)_b;
  return a->custo - b->custo;
}


int main(int argc, char** argv) {
  // número do teste
  int n = 1;

  while (true)
    {
      // Lê quantidade de tabas e rotas a serem analisadas
      int N, M;
      cin >> N;
      if (N == 0) break;
      cin >> M;
      
      // Monta tabas
      Vertice tabas[N];
      for (int i = 0 ; i < N; i ++) tabas[i].num = i;
      
      // Lê rotas
      Aresta rotas[M];
      for (int i = 0; i < M; i ++)
        {
          int X, Y, Z;
          cin >> X >> Y >> Z;
          if (X > N || Y > N || X < 1 || Y < 1) 
            {
              cout << "rota " << i << " da entrada é inválida" << endl;
              exit(0);
            }
          if (Y < X) { int tmp = X; X = Y; Y = tmp; }
          rotas[i].a = &tabas[X-1];
          rotas[i].b = &tabas[Y-1];
          rotas[i].custo = Z;
        }

      // Ordena rotas por custo
      qsort((void *)&rotas[0], M, sizeof(Aresta), &compara_aresta);

      // Header da saída do teste
      cout << "Teste " << n++ << endl;

      // Gera a árvore que conecta todas as tabas,
      //    selecionando as (N - 1) rotas mais baratas
      int selecionadas = 0;
      int idx_rotas = 0;
      while (selecionadas < N-1 && idx_rotas < M) 
        {
          const Aresta &rota = rotas[idx_rotas];
          if ( !rota.a->conectado(rota.b) )
            {
              // gera saída para esta rota
              cout << rota.a->num+1 << " " << rota.b->num+1 << endl;
              // conecta tabas
              rota.a->conecta(rota.b);
              selecionadas ++;
            }
          idx_rotas ++;
        }
      if (selecionadas != N-1)
        {
          cout << "*** grafo original não era conexo!?!?" << endl;
          exit(0);
        }
      
      // salta uma linha, como descrito no problema
      cout << endl;

    }

    return 0;
}

