
#include <bits/stdc++.h>
using namespace std;

string names[4] = {"Rolien", "Naej", "Elehcim", "Odranoel"};
int main()
{
	//freopen ( "in.txt", "r", stdin );

	int tc;
	cin >> tc;

	while ( tc-- )
	{
		int T;
		cin >> T;

		while ( T-- )
		{
			int n;
			cin >> n;
			cout << names[n - 1] << endl;
		}
	}

	return 0;
}
