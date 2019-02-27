#include <bits/stdc++.h>
#define Max(a, b) max(a, b)
#define Max3(a, b, c) max((max(a, b)), c)
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << Max3(a, b, c) << " eh o maior" << endl;

    return 0;
}
