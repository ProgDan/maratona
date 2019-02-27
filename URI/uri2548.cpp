#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int n, m;

	while(cin >> n >> m){
		vector<int> a(n);
	
		for(int i = 0; i < n; i++)
			cin >> a[i];

		int s = 0;
		for(int i = n - 1; i > n - m - 1; i--)
			s += a[i];
		
		cout << s << endl;
	}

	return 0;
}
