#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int n, q;
	cin >> n >> q;
	
	map<string, int> m;
	string s;
	for(int i = 0, a; i < n; i++){
		cin >> s >> a;
		m[s] = a;
	}
	for(int i = 0; i < q; i++){
		int sum = 0;		
		while(cin >> s and s != ".")
			sum += m[s];

		cout << sum << endl;
	}

	return 0;
}
