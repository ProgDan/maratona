
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int tc;
	cin >> tc;

	while ( tc-- )
	{
		int n;
		cin >> n;
		int arr[n + 1];
		int sum = 0;
		string s;

		for ( int i = 1; i <= n; i++ )
		{
			cin >> s;

			if ( s == "LEFT" )
			{
				sum -= 1;
				arr[i] = -1;
			}

			else if ( s == "RIGHT" )
			{
				sum += 1;
				arr[i] = 1;
			}

			else
			{
				int index;

				getchar();
				cin >> s;
				getchar();

				cin >> index;
				sum += arr[index];
				arr[i] = arr[index];
			}
		}

		cout << sum << endl;
	}

	return 0;
}
