
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main ()
{
	int inter, gremio, cnt = 0, inter_win = 0, gremio_win = 0, draw = 0, command;
	bool flag = false;

	//freopen ("in.txt", "r", stdin);

	while ( 1 )
	{
		cin >> inter >> gremio;

		if ( inter > gremio )
		{
			inter_win++;
		}

		else if ( gremio > inter )
		{
			gremio_win++;
		}

		else
		{
			draw++;
		}

		cnt++;
		flag = false;

		while ( flag == false )
		{
			cout << "Novo grenal (1-sim 2-nao)" << endl;
			cin >> command;

			if ( command == 1 )
			{
				flag = true;
				break;
			}

			else if ( command == 2 )
			{
				cout << cnt << " grenais" << endl;
				cout << "Inter:" << inter_win << endl;
				cout << "Gremio:" << gremio_win << endl;
				cout << "Empates:" << draw << endl;

				if ( inter_win > gremio_win )
				{
					cout << "Inter venceu mais" << endl;
				}

				else if ( inter_win < gremio_win )
				{
					cout << "Gremio venceu mais" << endl;
				}

				else
				{
					cout << "Nao houve vencedor" << endl;
				}

				return 0;
			}

			else
			{
				flag = false;
			}
		}
	}

	return 0;
}
