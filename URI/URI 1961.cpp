
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int P, N, cur, prev, flag = 0;
	cin >> P >> N;

	cin >> cur;
	N -= 1;

	while ( N-- )
	{
		prev = cur;
		cin >> cur;

		if ( abs ( cur - prev ) > P )
		{
			flag = 1;
		}
	}

	if ( flag )
	{
		cout << "GAME OVER" << endl;
	}

	else
	{
		cout << "YOU WIN" << endl;
	}

	return 0;
}
