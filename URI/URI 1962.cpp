
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	while ( N-- )
	{
		int T;
		cin >> T;

		if ( T > 2014 )
		{
			cout << T - 2014 << " A.C." << endl;
		}

		else
		{
			cout << 2015 - T << " D.C." << endl;
		}
	}

	return 0;
}
