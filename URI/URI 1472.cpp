
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin >> n)
    {
        int arr[n], x, sum = 0, ans = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
            arr[i] = sum; // cumulative sum
        }

        int len = sum / 3;

        if(len * 3 != sum)
        {
            cout << "0" << endl;
            continue;
        }

        int i, j, k;
        i = j = k = 0;

        while(arr[i] <= len)
        {
            while(arr[j] - arr[i] < len and j < n) j++;
            while(arr[k] - arr[i] < 2 * len and k < n) k++;

            if((arr[j] - arr[i] == len) and (arr[k] - arr[i] == 2*len)) ans++;

            i++;
        }

        cout << ans << endl;
    }
}
