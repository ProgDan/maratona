#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	string s;
	int tc = 1;
	bool bl = 0;

	while(cin >> s){
		cin.ignore();
		string n;
		getline(cin, n);

		stringstream ss(n);
		string a;
		int f = 0, m = 0;
		bool b = 0;
		while(ss >> a){
			if(a == s)
				b = 1;
			else if(b){
				if(a == "F")
					f++;
				else
					m++;
				b = 0;
			}
		}
		
		if(bl)
			cout << endl;
		cout << "Caso " << tc++ << ":" << endl;
		cout << "Pares Iguais: " << f + m << endl;
		cout << "F: " << f << endl;
		cout << "M: " << m << endl;
		bl = 1;
	}

	return 0;
}
