
#include <iostream>
using namespace std;

int main ()
{
	int x;

	for ( x = 1; x <= 13; x++ )
	{
		cout << "I=" << ( 3 * x - 2 ) << " J=" << 5 * ( 13 - x ) << endl;
	}

	return 0;
}
