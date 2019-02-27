
#include <iostream>
using namespace std;

int main()
{
	double A, B, C, temp;
	cin >> A >> B >> C;

	if ( A < B )
	{
		temp = A;
		A = B;
		B = temp;
	}

	if ( B < C )
	{
		temp = B;
		B = C;
		C = temp;
	}

	if ( A < B )
	{
		temp = A;
		A = B;
		B = temp;
	}


	if ( A >= B + C )
	{
		cout << "NAO FORMA TRIANGULO\n";
		return 0;
	}

	if ( A * A == B * B + C * C ) cout << "TRIANGULO RETANGULO\n";

	if ( A * A > B * B + C * C ) cout << "TRIANGULO OBTUSANGULO\n";

	if ( A * A < B * B + C * C ) cout << "TRIANGULO ACUTANGULO\n";

	if ( A == B && B == C ) cout << "TRIANGULO EQUILATERO\n";

	else if ( A == B || B == C || A == C ) cout << "TRIANGULO ISOSCELES\n";

	return 0;

}
