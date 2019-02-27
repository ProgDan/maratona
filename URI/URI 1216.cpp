
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	char name[1000];
	double dis, sum = 0;
	int cnt = 0;

	while ( gets ( name ) )
	{

		scanf ( "%lf", &dis );
		scanf ( "%c" );

		sum += dis;
		cnt++;
	}

	cout << fixed << setprecision ( 1 ) << sum / cnt << endl;

	return 0;
}
