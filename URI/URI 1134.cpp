
#include <iostream>
using namespace std;

int main ()
{
	int command = 0, alcohol = 0, gasoline = 0, diesel = 0;

	do
	{
		cin >> command;

		if ( command == 1 ) alcohol++;

		else if ( command == 2 ) gasoline++;

		else if ( command == 3 ) diesel++;
	}
	while ( command != 4 );

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcohol << endl;
	cout << "Gasolina: " << gasoline << endl;
	cout << "Diesel: " << diesel << endl;

	return 0;
}
