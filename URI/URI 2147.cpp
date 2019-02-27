
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string str;
	cin >> t;

	while ( t-- )
	{
		cin >> str;
		cout << fixed << setprecision ( 2 ) << str.length() / 100.00 << endl;
	}

	return 0;
}
