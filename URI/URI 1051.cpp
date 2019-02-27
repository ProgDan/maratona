
# include <iostream>
# include <iomanip>

using namespace std;

int main()
{
	float salary, tax;

	cin >> salary;

	if ( salary <= 2000 )
	{
		cout << "Isento\n";
		return 0;
	}

	if ( salary > 4500 )
		tax = ( salary - 4500 ) * 0.28 + 1500 * 0.18 + 1000 * 0.08;

	else if ( salary > 3000 )
		tax = ( salary - 3000 ) * 0.18 + 1000 * 0.08;

	else
		tax = ( salary - 2000 ) * 0.08;

	cout << "R$ " << fixed << setprecision ( 2 ) << tax << endl;

	return 0;

}
