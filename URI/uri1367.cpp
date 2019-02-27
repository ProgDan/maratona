#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int T;

	while(cin >> T){
		if(T == 0)
			break;

		vector<int> v(26, 0);
		vector<int> ex(26, 0);
		char ch;
		string s;
		for(int i = 0, n; i < T; i++){
			cin >> ch >> n >> s;
			
			if(s == "correct" and !v[ch - 'A'])
				v[ch - 'A'] = n;
			if(s == "incorrect" and !v[ch - 'A'])
				ex[ch - 'A'] += 20;
		}

		int sum = 0, con = 0;
		for(int i = 0; i < 26; i++){
			if(v[i] != 0){
				con++;
				sum += (v[i] + ex[i]);
			}
		}

		cout << con << " " << sum << endl;
	}

	return 0;
}
