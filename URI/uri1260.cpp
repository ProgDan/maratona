#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	string s;
	getline(cin, s);
	getline(cin, s);

	map<string, int> m;
	for(int i = 0; i < T; i++){
		m.clear();
		int total = 0;
		
		while(getline(cin, s) and s[0]){
			m[s]++;
			total++;
		}

		map<string, int>::iterator it;
		for(it = m.begin(); it != m.end(); it++)
			cout << fixed << setprecision(4) << it->first << " " << (it->second * 100.0) / total << endl;
		if(i < T - 1)
			cout << endl;
	}

	return 0;
}
