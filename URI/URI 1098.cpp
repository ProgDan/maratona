
#include <iostream>
using namespace std;

int main ()
{
	double i = 0;

	while ( i <= 2 )
	{
		cout << "I=" << i << " J=" << i + 1 << endl;
		cout << "I=" << i << " J=" << i + 2 << endl;
		cout << "I=" << i << " J=" << i + 3 << endl;

		i += 0.2;
	}

	return 0;
}
