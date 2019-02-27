
#include <bits/stdc++.h>
using namespace std;

int main()
{

	//freopen ( "in.txt", "r", stdin );

	string r = "pedra", p = "papel", as = "ataque";
	int n;
	cin >> n;

	while ( n-- )
	{
		string p1, p2;
		cin >> p1;
		cin >> p2;

		if ( p1 == p2 )
		{
			if ( p1 == p ) cout << "Ambos venceram" << endl;

			else if ( p1 == r ) cout << "Sem ganhador" << endl;

			else cout << "Aniquilacao mutua" << endl;
		}

		else if ( p1 == as || p2 == p ) cout << "Jogador 1 venceu" << endl;

		else if ( p2 == as || p1 == p ) cout << "Jogador 2 venceu" << endl;

	}

	return 0;
}
