
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float oldSalary, percentile, increse, newSalary;
	cin >> oldSalary;

	if ( oldSalary <= 400 )
		percentile = 15;

	else if ( oldSalary <= 800 )
		percentile = 12;

	else if ( oldSalary <= 1200 )
		percentile = 10;

	else if ( oldSalary <= 2000 )
		percentile = 7;

	else
		percentile = 4;

	increse = oldSalary * percentile / 100;
	newSalary = oldSalary + increse;
	cout << fixed << setprecision ( 2 ) << "Novo salario: " << newSalary << "\n"
		 << "Reajuste ganho: " << increse << "\n"
		 << setprecision ( 0 ) << "Em percentual: " << percentile << " %" << "\n";

	return 0;
}
