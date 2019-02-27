#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr[] = {100, 50, 20, 10, 5, 2, 1};
    int n;
    cin >> n;

    cout << n << endl;
    for(int i = 0; i < 7; i++){
        int a = n / arr[i];
        cout << a << " nota(s) de R$ " << arr[i] << ",00" << endl;
        n -= a * arr[i];
    }

    return 0;
}
