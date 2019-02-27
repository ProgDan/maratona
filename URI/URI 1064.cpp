
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i, cnt = 0;
	double sum = 0, num;

	//freopen ("in.txt", "r", stdin);

	for ( i = 0; i < 6; i++ )
	{
		cin >> num;

		if ( num > 0 )
		{
			sum += num;
			cnt++;
		}
	}

	cout << cnt << " valores positivos" << endl;
	cout << ( sum / cnt ) << endl;
}
