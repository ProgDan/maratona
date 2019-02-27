
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, ans, N, n;
	cin >> t;

	for ( int cs = 1; cs <= t; cs++ )
	{
		cin >> N;

		for ( int i = 1; i <= N; i++ )
		{
			cin >> n;

			if ( i == ( N / 2 ) + 1 ) ans = n;
		}

		cout << "Case " << cs << ": " << ans << endl;
	}

	return 0;
}
