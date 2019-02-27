
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, guess, sum = 0;
	cin >> T;

	for ( int i = 0; i < 5; i++ )
	{
		cin >> guess;

		if ( guess == T )
		{
			sum++;
		}
	}

	cout << sum << endl;

	return 0;
}
