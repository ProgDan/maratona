
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char str[100];
char ans[100];

int main()
{
	int flag = 0, index = 0;
	char ch;

	//freopen ("in.txt", "r", stdin);

	while ( gets ( str ) )
	{

		flag = 0;
		index = 0;

		while ( index < strlen ( str ) )
		{

			ch = str[index];

			if ( flag == 0 && isalpha ( ch ) )
			{
				ans[index] = ( toupper ( ch ) );
				flag = 1;
			}

			else if ( flag == 1 && isalpha ( ch ) )
			{
				ans[index] =  ( tolower ( ch ) );
				flag = 0;
			}

			else
				ans[index] = ch;

			index++;
		}

		ans[index] = '\0';
		puts ( ans );
	}

	return 0;
}
