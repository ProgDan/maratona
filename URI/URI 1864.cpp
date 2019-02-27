
#include <iostream>
using namespace std;

int main()
{
	char quote[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	int N, i;

	cin >> N;

	for ( i = 0; i < N; i++ ) cout << quote[i];

	cout << endl;

	return 0;
}
