#include <bits/stdc++.h>
typedef unsigned long long int ll;
#define read() freopen("input.txt", "r", stdin)
using namespace std;

ll fact(int a, int b)
{
	if(a <= 0)
		return 1;
	return a * fact(a - b, b);
}

int main(void)
{
	int T;
	cin >> T;
	
	string s;
	for(int i = 0, n; i < T; i++){
		cin >> n >> s;
		
		cout << fact(n, s.length()) << endl;
	}

	return 0;
}
