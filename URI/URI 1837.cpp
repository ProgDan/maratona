
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	int q, r;

	cin >> a >> b;

	if ( a < 0 && b < 0 )
		q = ceil ( a / b );

	else if ( a < 0 )
		q = floor ( a / b );

	else
		q = a / b;


	r = a - ( b * q );

	cout << q << " " << r << endl;

	return 0;
}
