
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while ( tc-- )
	{
		double x;
		cin >> x;
		cout << ceil ( log ( x ) / log ( 2 ) ) << " dias" << endl;
	}

	return 0;
}
