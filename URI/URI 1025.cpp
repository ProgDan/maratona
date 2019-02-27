#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, Q, cnt = 1, i, flag, key;

	//freopen ("in.txt", "r", stdin);

	while ( 1 )
	{

		cin >> N >> Q;

		if ( N == 0 && Q == 0 )
			return 0;

		cout << "CASE# " << cnt++ << ":\n";

		int arr[N];

		for ( i = 0; i < N; i++ )
			cin >> arr[i];

		sort ( arr, arr + N );

		while ( Q-- )
		{

			cin >> key;
			flag = 0;

			for ( i = 0; i < N; i++ )
			{
				if ( arr[i] == key )
				{
					cout << key << " found at " << i + 1 << endl;
					flag = 1;
					break;
				}
			}

			if ( flag == 0 )
				cout << key << " not found\n";
		}
	}
}
