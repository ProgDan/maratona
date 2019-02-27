
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int st, max_st, n;
	double num, max_num;
	cin >> n;
	n--;
	cin >> max_st >> max_num;

	while ( n-- )
	{
		cin >> st >> num;

		if ( num > max_num )
		{
			max_st = st;
			max_num = num;
		}
	}

	if ( max_num >= 8 )
	{
		cout << max_st << endl;
	}

	else
	{
		cout << "Minimum note not reached" << endl;
	}

	return 0;
}
