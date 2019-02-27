#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a == "vertebrado"){
        if(b == "ave"){
            if(c == "carnivoro")
                cout << "aguia" << endl;
            else
                cout << "pomba" << endl;
        }
        else{
            if(c == "onivoro")
                cout << "homem" << endl;
            else
                cout << "vaca" << endl;
        }
    }
    else if(a == "invertebrado"){
        if(b == "inseto"){
            if(c == "hematofago")
                cout << "pulga" << endl;
            else
                cout << "lagarta" << endl;
        }
        else{
            if(c == "hematofago")
                cout << "sanguessuga" << endl;
            else
                cout << "minhoca" << endl;
        }
    }

    return 0;
}
