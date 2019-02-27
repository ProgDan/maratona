
#include <iostream>
using namespace std;

int main()
{
	int N, i = 2;
	cin >> N;

	for ( ; i <= N; i += 2 )
		cout << i << "^" << "2" << " = " << i * i << endl;

	return 0;
}
