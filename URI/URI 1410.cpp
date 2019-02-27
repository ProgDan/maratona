
#include <bits/stdc++.h>
using namespace std;

int atk[20];
int dfn[20];

int min ( int arr[], int size )
{
	int ind = 0;
	int ans = arr[0];

	for ( int i = 0; i < size; i++ )
	{
		if ( arr[i] < ans )
		{
			ind = i;
			ans = arr[i];
		}
	}

	arr[ind] = 99999;
	return ans;
}

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int A, D, i;

	while ( cin >> A >> D && A && D )
	{
		for ( i = 0; i < A; i++ )
		{
			cin >> atk[i];
		}

		for ( i = 0; i < D; i++ )
		{
			cin >> dfn[i];
		}

		int x = min ( atk, A );
		int y = min ( dfn, D );
		y = min ( dfn, D );

		if ( x < y )
		{
			cout << "Y" << endl;
		}

		else
		{
			cout << "N" << endl;
		}
	}

	return 0;
}
