
#include <iostream>
using namespace std;

int main()
{
	char months[][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int month;

	cin >> month;
	cout << months[month - 1] << endl;

	return 0;
}
