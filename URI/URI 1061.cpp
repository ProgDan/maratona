
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int day, hh, mm, ss, toBeginning, toEnd, totalSec;

	scanf ( "Dia %d\n", &day );
	scanf ( "%d : %d : %d\n", &hh, &mm, &ss );

	toBeginning = ( day - 1 ) * 86400 + hh * 3600 + mm * 60 + ss;

	scanf ( "Dia %d\n", &day );
	scanf ( "%d : %d : %d", &hh, &mm, &ss );

	toEnd = ( day - 1 ) * 86400 + hh * 3600 + mm * 60 + ss;

	totalSec = toEnd - toBeginning;

	day = totalSec / 86400;
	totalSec = totalSec % 86400;

	hh = totalSec / 3600;
	totalSec = totalSec % 3600;

	mm = totalSec / 60;

	ss = totalSec % 60;

	printf ( "%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", day, hh, mm, ss );

	return 0;

}
