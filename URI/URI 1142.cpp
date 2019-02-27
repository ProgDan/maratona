
#include <iostream>
using namespace std;

int main ()
{
	int N, i = 1;
	cin >> N;

	while ( N-- )
	{
		cout << i << " " << i + 1 << " " << i + 2 << " PUM" << endl;
		i += 4;
	}

	return 0;
}
