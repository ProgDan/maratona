
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int hh, mm, delay;
	char colon;

	while ( scanf ( "%d%c%d", &hh, &colon, &mm ) != EOF )

	{
		delay = hh * 60 + mm + 60 - 480;

		if ( delay > 0 )
		{
			cout << "Atraso maximo: " << delay << endl;
		}

		else
		{
			cout << "Atraso maximo: 0" << endl;
		}
	}

	return 0;
}
