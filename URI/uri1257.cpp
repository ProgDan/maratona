#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;
		cin.ignore();
		
		int sum = 0;
		string s;
		for(int j = 0; j < n; j++){
			cin >> s;
			
			for(int k = 0; k < s.length(); k++)
				sum += (s[k] - 'A') + j + k;
		}
		
		cout << sum << endl;
	}

	return 0;
}
