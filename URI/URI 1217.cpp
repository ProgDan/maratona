
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	double total_money = 0, total_weight = 0;

	for ( int i = 1; i <= t; i++ )
	{
		double v;
		cin >> v;
		total_money += v;

		getchar();

		int cnt = 0;
		string str;
		getline ( cin, str );
		stringstream ss ( str );
		string buf;

		while ( ss >> buf )
		{
			cnt++;
			total_weight++;
		}

		cout << "day " << i << ": " << cnt << " kg" << endl;
	}

	cout << fixed << setprecision ( 2 ) << total_weight / t << " kg by day" << endl;
	cout << "R$ " << fixed << setprecision ( 2 ) << total_money / t << " by day" << endl;

	return 0;
}
