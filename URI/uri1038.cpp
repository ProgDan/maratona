#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    double arr[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    cin >> a >> b;

    cout << fixed << setprecision(2) << "Total: R$ " << arr[a - 1] * b << endl;

    return 0;
}
