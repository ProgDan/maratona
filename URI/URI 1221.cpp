
#include <bits/stdc++.h>
using namespace std;

void primeChecker ( int n )
{
	if ( n == 1 )
	{
		cout << "Not Prime" << endl;
		return;
	}

	if ( n == 2 )
	{
		cout << "Prime" << endl;
		return;
	}

	if ( n % 2 == 0 )
	{
		cout << "Not Prime" << endl;
		return;
	}

	int x = sqrt ( n ) + 1;

	for ( int i = 3; i <= x; i += 2 )
	{
		if ( n % i == 0 )
		{
			cout << "Not Prime" << endl;
			return;
		}
	}

	cout << "Prime" << endl;
	return;
}

int main()
{

	int N;
	cin >> N;

	while ( N-- )
	{
		int num;
		cin >> num;
		primeChecker ( num );
	}

	return 0;
}
