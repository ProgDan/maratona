
#include <bits/stdc++.h>
using namespace std;
int pos = -1;
int cnt = 0;

void func ( string sub, string parent, int begin )
{
	int p = parent.find ( sub, begin );

	if ( p != string::npos )
	{
		pos = p;
		cnt++;
		func ( sub, parent, p + 1 );
	}

	return;
}

int main()
{
	//freopen ( "in.txt", "r", stdin );

	string sub, parent;
	int c = 0;

	while ( cin >> sub >> parent )
	{
		pos = -1;
		cnt = 0;
		c++;
		cout << "Caso #" << c << ":" << endl;

		func ( sub, parent, 0 );

		if ( pos == -1 )
		{
			cout << "Nao existe subsequencia" << endl << endl;
		}

		else
		{
			cout << "Qtd.Subsequencias: " << cnt << endl;
			cout << "Pos: " << pos + 1 << endl << endl;
		}
	}

	return 0;
}
