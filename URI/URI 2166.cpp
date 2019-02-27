
#include <bits/stdc++.h>
using namespace std;

double func ( int n )
{
	if ( n == 0 ) return 2;

	return 2 + 1.0 / func ( n - 1 );
}

int main()
{
	int n;
	cin >> n;
	cout << fixed << setprecision ( 10 ) << func ( n ) - 1 << endl;

	return 0;
}
