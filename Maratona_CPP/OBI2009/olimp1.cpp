#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

#define MAXN 112

int medalhas[MAXN], paises[MAXN];

bool cmp(const int i, const int j) {
  return medalhas[i] > medalhas[j] || (medalhas[i] == medalhas[j] && i < j);
}

int main() {
  int n, m;

  scanf("%d%d", &n, &m);
  memset(medalhas, 0, sizeof(medalhas));
  for (int i = 0; i < m; i++) {
    int o, p, b;
    scanf(" %d%d%d", &o, &p, &b); o--; p--; b--;
    medalhas[o]++; medalhas[p]++; medalhas[b]++;
  }
  
  for (int i = 0; i < n; i++) paises[i] = i;
  sort(paises, paises + n, cmp);
  printf("%d", paises[0]+1);
  for (int i = 1; i < n; i++) printf(" %d", paises[i]+1);
  printf("\n");

  return 0;
}
