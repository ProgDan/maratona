
#include <bits/stdc++.h>
using namespace std;

int main()
{

	//freopen ( "in.txt", "r", stdin );

	int N;
	cin >> N;

	while ( N-- )
	{
		int t1, t2, t1home, t1away, t2home, t2away;

		cin >> t1home;
		getchar();
		getchar();
		getchar();
		cin >> t2away;

		cin >> t2home;
		getchar();
		getchar();
		getchar();
		cin >> t1away;

		t1 = t1home + t1away;
		t2 = t2home + t2away;

		if ( t1 > t2 )
		{
			cout << "Time 1" << endl;
		}

		else
			if ( t2 > t1 )
			{
				cout << "Time 2" << endl;
			}

			else
			{
				if ( t1away > t2away )
				{
					cout << "Time 1" << endl;
				}

				else
					if ( t2away > t1away )
					{
						cout << "Time 2" << endl;
					}

					else
					{
						cout << "Penaltis" << endl;
					}
			}
	}

	return 0;
}
