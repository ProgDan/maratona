
#include <iostream>
using namespace std;

int main()
{
	int N, i, num, cnt = 0;
	cin >> N;

	for ( i = 0; i < N; i++ )
	{
		cin >> num;

		if ( num >= 10 && num <= 20 )
			cnt++;
	}

	cout << cnt << " in" << endl;
	cout << ( N - cnt ) << " out" << endl;

	return 0;
}
