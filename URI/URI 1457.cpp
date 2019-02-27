
/* stoi() requires c++11 or higher */

#include <bits/stdc++.h>
using namespace std;

string::size_type sz = 0;

unsigned long long int fact ( int n, int k )
{
	unsigned long long ans = 1;

	for ( int i = 0; i * k < n; i++ )
	{
		ans *= n - i * k;
	}

	return ans;
}

int main()
{
	int t;
	cin >> t;

	while ( t-- )
	{
		string str;
		cin >> str;
		int pos = str.find ( "!" );

		int n = stoi ( str.substr ( 0, pos ), &sz, 10 );
		int k = str.length() - pos;
		cout << fact ( n, k ) << endl;
	}

	return 0;
}
