#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  while(cin >> n && n)
  {
      int sum = 0, fact = 1;

      for(int i = 1; n > 0; i++)
      {
            fact = fact * i;
            sum += (n % 10) * fact;
            n /= 10;
      }
      cout << sum << endl;
  }

    return 0;
}
