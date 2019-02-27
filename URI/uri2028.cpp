#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, tc = 1;

    while(cin >> n){

        cout << "Caso " << tc++ << ": ";

        if(n == 0){
            cout << "1 numero" << endl;
            cout << 0 << endl;
        }

        else{
            vector<int> v;
            v.push_back(0);
            for(int i = 1; i <= n; i++){
                for(int j = 0; j < i; j++)
                    v.push_back(i);
            }


            cout << v.size() << " numeros" << endl;
            for(int i = 0; i < v.size(); i++){
                cout << v[i];
                if(i < v.size() - 1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
