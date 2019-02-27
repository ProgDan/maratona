
#include <iostream>
using namespace std;

int main()
{
	int i = 0, cnt = 0;
	double num;

	while ( i < 6 )
	{
		cin >> num;

		if ( num > 0 )
			cnt++;

		i++;
	}

	cout << cnt << " valores positivos" << endl;

	return 0;
}
