
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	double A, B, C;
	int ans;

	//freopen ("in.txt", "r", stdin);

	while ( scanf ( "%lf %lf %lf", &A, &B, &C ) == 3 )
	{
		ans = sqrt ( ( A * B * 100 ) / C ) ;

		cout << ans << endl;
	}

	return 0;
}
