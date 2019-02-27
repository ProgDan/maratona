#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    vector<int> par;
    vector<int> impar;

    for(int i = 0, n; i < 15; i++){
        cin >> n;

        if(n & 1)
            impar.push_back(n);
        else
            par.push_back(n);

        if(par.size() == 5){
            for(int j = 0; j < 5; j++)
                cout << "par[" << j << "] = " << par[j] << endl;
            par.clear();
        }
        else if(impar.size() == 5){
            for(int j = 0; j < 5; j++)
                cout << "impar[" << j << "] = " << impar[j] << endl;
            impar.clear();
        }
    }
    for(int j = 0; j < impar.size(); j++)
            cout << "impar[" << j << "] = " << impar[j] << endl;
    impar.clear();
    for(int i = 0; i < par.size(); i++)
        cout << "par[" << i << "] = " << par[i] << endl;
    par.clear();


    return 0;
}
