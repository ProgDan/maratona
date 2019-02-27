
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N;
	cin >> N;

	if ( N == 0 ) return 0;

	while ( N > 1 )
	{
		cout << "Ho ";
		N--;
	}

	cout << "Ho!" << endl;

	return 0;
}
