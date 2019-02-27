#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;
		cin.ignore();

		vector<string> v(n);
		for(int j = 0; j < n; j++)
			cin >> v[j];

		vector<bool> vv(n, 0);
		string s;
		for(int j = 0; j < n; j++){
			cin >> s;
			
			int len = s.length(), pr = 0, ab = 0;
			bool c = 0;
			for(int k = 0; k < len; k++){
				if(s[k] == 'P')
					pr++;
				if(s[k] == 'A')
					ab++;
			}
			double p;
			if(pr or ab)
				p = (pr * 100.0) / ((pr + ab) * 1.0);
			else
				c = 1;
			if(p >= 75.0 or c)
				vv[j] = 1;
		}

		bool b = 0;
		for(int j = 0; j < n; j++){
			if(!vv[j]){
				if(b)
					cout << " ";
				cout << v[j];
				b = 1;
			}
		}
		cout << endl;
	}

	return 0;
}
