
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int max = ( a > b ) ? ( ( a > c ) ? a : c ) : ( ( b > c ) ? b : c );

	int min = ( a < b ) ? ( ( a < c ) ? a : c ) : ( ( b < c ) ? b : c );

	cout << min << endl << a + b + c - min - max << endl << max << endl << endl;
	cout << a << endl << b << endl << c << endl;

	return 0;
}
