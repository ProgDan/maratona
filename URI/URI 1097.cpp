
#include <iostream>
using namespace std;

int main ()
{
	int i, j = 2;

	for ( i = 1; i <= 9; i += 2 )
	{
		j += 5;

		cout << "I=" << i << " J=" << j-- << endl;
		cout << "I=" << i << " J=" << j-- << endl;
		cout << "I=" << i << " J=" << j-- << endl;
	}

	return 0;
}
