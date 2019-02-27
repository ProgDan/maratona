
#include <bits/stdc++.h>
using namespace std;

int main()
{
	while ( 1 )
	{
		int N, m = 0, j = 0, t;
		cin >> N;

		if ( !N )
		{
			return 0;
		}

		while ( N-- )
		{
			cin >> t;

			if ( !t )
			{
				m++;
			}

			else
			{
				j++;
			}
		}

		cout << "Mary won " << m << " times and John won " << j << " times" << endl;
	}

	return 0;
}
