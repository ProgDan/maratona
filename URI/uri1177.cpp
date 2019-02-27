#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int i = 0, j = 0; i < 1000; i++, j++)
        cout << "N[" << i << "] = " << (j < n? j: j = 0) << endl;

    return 0;
}
