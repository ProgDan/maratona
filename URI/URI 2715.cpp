#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int arr[n];
        long long int sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        long long int temp = 0;
        for(int i = 0; i < n; i++)
        {
            temp += arr[i];
            if (temp*2 >= sum)
            {
                long long int a1 = temp*2 - sum;
                long long int a2 = sum - (temp - arr[i]) * 2;
                long long int ans = min(a1, a2);

                cout << ans << endl;;
                break;
            }

        }
    }

}
