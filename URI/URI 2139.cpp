
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
	int mm, dd;

	while ( cin >> mm >> dd )
	{
		if ( mm == 12 and dd == 24 ) cout << "E vespera de natal!" << endl;

		else if ( mm == 12 and dd == 25 ) cout << "E natal!" << endl;

		else if ( mm == 12 and dd > 25 ) cout << "Ja passou!" << endl;

		else if ( mm == 12 and dd < 24 ) cout << "Faltam " << 25 - dd << " dias para o natal!" << endl;

		else
		{
			int ans = 0;

			for ( int i = mm; i <= 12; i++ ) ans += arr[i];

			cout << "Faltam " << ans - dd << " dias para o natal!" << endl;
		}

	}

	return 0;
}
