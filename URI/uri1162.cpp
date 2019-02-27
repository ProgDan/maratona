#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int insertion(vector<int>& a);

int main(void)
{
    int T;
    cin >> T;

    for(int tc = 1, n; tc <= T; tc++){
        cin >> n;
        vector<int> a(n);
        for(int j = 0; j < n; j++)
            cin >> a[j];

        cout << "Optimal train swapping takes " << insertion(a) << " swaps." << endl;
        a.clear();
    }

    return 0;
}

int insertion(vector<int>& a)
{
    int con = 0;
    for(int i = 1; i < a.size(); i++){
        int j = i;
        while(j > 0 && a[j - 1] > a[j]){
            swap(a[j - 1], a[j]);
            j--;
            con++;
        }
    }

    return con;
}
