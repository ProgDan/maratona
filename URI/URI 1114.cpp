
#include <iostream>
using namespace std;

int main ()
{
	int password;

	while ( 1 )
	{
		cin >> password;

		if ( password != 2002 )
		{
			cout << "Senha Invalida" << endl;
		}

		else
		{
			cout << "Acesso Permitido" << endl;
			break;
		}
	}

	return 0;
}
