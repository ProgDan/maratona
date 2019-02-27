
#include <iostream>
using namespace std;

int main()
{
	int initHH, initMM, finHH, finMM, HH, MM;
	cin >> initHH >> initMM >> finHH >> finMM;

	HH = ( finHH - initHH + 23 ) % 24 + 1;

	if ( finMM < initMM )
	{
		HH--;
		finMM += 60;
	}

	HH = HH % 24;
	MM = finMM - initMM;

	if ( HH == 0 && MM == 0 )
		HH = 24;

	cout << "O JOGO DUROU " << HH << " HORA(S) E " << MM << " MINUTO(S)" << endl;
}
