
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N, level, max_level, num;

	//freopen ("in.txt", "r", stdin);

	while ( ( scanf ( "%d", &N ) == 1 ) )
	{
		max_level = 1;

		while ( N-- )
		{
			cin >> num;
			level = num / 10 + 1;

			if ( level > max_level )
				max_level = level;
		}

		cout << max_level << endl;
	}

	return 0;
}
