
#include <iostream>
using namespace std;

int main()
{
	int par[5], impar[5], N = 15, num, i, len_par = 0, len_impar = 0;

	while ( N-- )
	{
		cin >> num;

		if ( num % 2 == 0 )
		{
			par[len_par++] = num;
		}

		else
		{
			impar[len_impar++] = num;
		}

		if ( len_par == 5 )
		{
			for ( i = 0; i < 5; i++ )
			{
				cout << "par[" << i << "] = " << par[i] << endl;
			}

			len_par = 0;
		}

		if ( len_impar == 5 )
		{
			for ( i = 0; i < 5; i++ )
			{
				cout << "impar[" << i << "] = " << impar[i] << endl;
			}

			len_impar = 0;
		}
	}

	for ( i = 0; i < len_impar; i++ )
	{
		cout << "impar[" << i << "] = " << impar[i] << endl;
	}

	for ( i = 0; i < len_par; i++ )
	{
		cout << "par[" << i << "] = " << par[i] << endl;
	}

	return 0;

}
