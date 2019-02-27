
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int height, width;

	while ( cin >> height >> width and ( height + width ) )
	{
		int ans = 0, prev = height, next;

		while ( width-- )
		{
			cin >> next;

			if ( next < prev ) ans += ( prev - next );

			prev = next;
		}

		cout << ans << endl;
	}

	return 0;
}
