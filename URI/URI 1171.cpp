
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[2005];

	for ( int i = 0; i < 2005; i++ )
	{
		arr[i] = 0;
	}

	int tc, num;
	cin >> tc;

	while ( tc-- )
	{
		cin >> num;
		arr[num]++;
	}

	for ( int i = 0; i < 2005; i++ )
	{
		if ( arr[i] )
		{
			cout << i << " aparece " << arr[i] << " vez(es)" << endl;
		}
	}

	return 0;
}
