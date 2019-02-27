#include <bits/stdc++.h>
using namespace std;

int main()
{
  unsigned n;
  while(cin >> n && n)
  {
      for(unsigned i = 1; i <= sqrt(n); i++)
      {
          if(i > 1) cout << " ";
          cout << i*i;
      }
      cout << endl;
  }

    return 0;
}
