
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int b, a, d, l;
		
		cin >> b;
		
		cin >> a >> d >> l;
		double dab = (a+d) / 2.0 + (!(l%2))*b;
		
		cin >> a >> d >> l;
		double gua = (a+d) / 2.0 + (!(l%2))*b;
		
		if (dab > gua)		cout << "Dabriel" << endl;
		else if (gua > dab)	cout << "Guarte" << endl;
		else if (dab == gua)	cout << "Empate" << endl;
	}
	
	return 0;
}
