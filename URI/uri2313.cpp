#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

template<class T> T sqr(T a) { return a * a; }

int main(void)
{
    vector<int> v(3);
    for(int i = 0; i < 3; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    if(v[0] + v[1] > v[2]){
        if(v[0] != v[1] and v[1] != v[2] and v[0] != v[2])
            cout << "Valido-Escaleno" << endl;
        if(v[0] == v[1] or v[1] == v[2]){
            if(v[0] == v[2])
                cout << "Valido-Equilatero" << endl;
            else
                cout << "Valido-Isoceles" << endl;
        }

        if((v[0] * v[0]) + (v[1] * v[1]) == (v[2] * v[2]))
            cout << "Retangulo: S" << endl;
        else
            cout << "Retangulo: N" << endl;
    }
    else
        cout << "Invalido" << endl;

    return 0;
}
