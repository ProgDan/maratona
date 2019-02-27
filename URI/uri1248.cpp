#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();
	
	string a, b, c;
	for(int i = 0; i < T; i++){
		getline(cin, a);
		getline(cin, b);
		getline(cin, c);
		
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		
		int v[26] = {0};
		bool f = 0;
		for(int j = 0; j < a.length(); j++)
			v[a[j] - 'A']++;
		for(int j = 0; j < b.length(); j++){
			if(v[b[j] - 'A'] == 0){
				f = 1;
				break;
			}
			else
				v[b[j] - 'A']--;
		}
		if(!f){
			for(int j = 0; j < c.length(); j++){
				if(v[c[j] - 'A'] == 0){
					f = 1;
					break;
				}
				else
					v[c[j] - 'A']--;
			}
		}

		if(f)
			cout << "CHEATER" << endl;
		else{
			for(int j = 0; j < 26; j++)
				if(v[j] > 0)
					cout << (char)(j + 'A');
			cout << endl;
		}
	}

	return 0;
}
