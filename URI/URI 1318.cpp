
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;

	while ( 1 )
	{
		cin >> N >> M;
		int tickets[N + 1];
		int num, cnt = 0;

		if ( N == 0 && M == 0 )
		{
			return 0;
		}

		for ( int i = 1; i <= N; i++ )
		{
			tickets[i] = -1;
		}

		while ( M-- )
		{
			cin >> num;
			tickets[num]++;
		}


		for ( int i = 1; i <= N; i++ )
		{
			if ( tickets[i] > 0 )
			{
				cnt++;
			}
		}


		cout << cnt << endl;
	}

	return 0;
}
