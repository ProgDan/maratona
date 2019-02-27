
#include <stdio.h>
#include <string.h>

int main()
{
	int cases, i = 1;

	char s[80], r[80];
	char h[][20] = { "tesoura", "papel", "pedra", "lagarto", "Spock" };

	scanf ( "%d", &cases );

	while ( i <= cases )
	{

		scanf ( "%s %s", s, r );

		if ( strcmp ( s, r ) == 0 ) printf ( "Caso #%d: De novo!\n", i );

		else if ( strcmp ( s, h[0] ) == 0 && ( strcmp ( r, h[1] ) == 0 || strcmp ( r, h[3] ) == 0 ) ) printf ( "Caso #%d: Bazinga!\n", i );

		else if ( strcmp ( s, h[1] ) == 0 && ( strcmp ( r, h[2] ) == 0 || strcmp ( r, h[4] ) == 0 ) ) printf ( "Caso #%d: Bazinga!\n", i );

		else if ( strcmp ( s, h[2] ) == 0 && ( strcmp ( r, h[3] ) == 0 || strcmp ( r, h[0] ) == 0 ) ) printf ( "Caso #%d: Bazinga!\n", i );

		else if ( strcmp ( s, h[3] ) == 0 && ( strcmp ( r, h[4] ) == 0 || strcmp ( r, h[1] ) == 0 ) ) printf ( "Caso #%d: Bazinga!\n", i );

		else if ( strcmp ( s, h[4] ) == 0 && ( strcmp ( r, h[0] ) == 0 || strcmp ( r, h[2] ) == 0 ) ) printf ( "Caso #%d: Bazinga!\n", i );

		else printf ( "Caso #%d: Raj trapaceou!\n", i );

		i++;
	}

	return 0;

}
