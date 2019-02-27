
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	double N;
	cin >> N;

	for ( i = 0; i < 100; i++ )
	{
		cout << "N[" << fixed << setprecision ( 4 ) << i << "] = " << N << endl;
		N /= 2;
	}

	return 0;
}
