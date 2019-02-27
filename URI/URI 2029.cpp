
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	double V, D;
	char nl1, nl2;

	while ( scanf ( "%lf %lf", &V, &D ) != EOF )
	{
		double area = 3.14 * D * D / 4;
		double height = V / area;

		cout << fixed << setprecision ( 2 ) << "ALTURA = " << height << endl << "AREA = " << area << endl;
	}

	return 0;
}
