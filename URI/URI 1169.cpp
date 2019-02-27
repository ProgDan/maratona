
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long int ans, squares, T;
	cin >> T;

	while ( T-- )
	{
		cin >> squares;
		ans = pow ( 2, squares ) / 12000;
		cout << ans << " kg" << endl;
	}

	return 0;
}
