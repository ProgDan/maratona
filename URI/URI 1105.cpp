
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int B, N, D, C, V;
loop:

	while ( cin >> B >> N and ( B + N ) )
	{
		int arr[B + 1];

		for ( int i = 1; i <= B; i++ )
		{
			cin >> arr[i];
		}

		while ( N-- )
		{
			cin >> D >> C >> V;
			arr[D] -= V;
			arr[C] += V;
		}

		for ( int i = 1; i <= B; i++ )
		{
			if ( arr[i] < 0 )
			{
				cout << "N" << endl;
				goto loop;
			}
		}

		cout << "S" << endl;
	}

	return 0;
}
