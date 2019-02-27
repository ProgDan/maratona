
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	double s = ( a + b + c ) / 2;

	if ( s > a && s > b && s > c )
		cout << fixed << setprecision ( 1 ) << "Perimetro = " << a + b + c << endl;

	else
		cout << fixed << setprecision ( 1 ) << "Area = " << .5 * ( a + b ) * c << endl;

	return 0;
}
