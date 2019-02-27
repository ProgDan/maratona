
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n, x;
	string s;
	cin >> n >> x;

	while ( x-- )
	{
		cin >> s;

		if ( s == "fechou" ) n++;

		else n--;
	}

	cout << n << endl;

	return 0;
}
