
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main()
{
	int N, i;
	double a, b, c;

	//freopen ("in.txt", "r", stdin);

	cin >> N;

	for ( i = 0; i < N; i++ )
	{
		cin >> a >> b >> c;

		cout << fixed << setprecision ( 1 ) << ( a * 2 + b * 3 + c * 5 ) / 10 << endl;
	}

	return 0;
}
