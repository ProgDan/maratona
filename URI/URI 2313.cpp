#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	
	if(a>b) swap(a, b);
	if(b>c) swap(b, c);
	if(a>b) swap(a, b);
	
	if(a+b <= c)
	{
		cout << "Invalido" << endl;
		return 0;
	}
	
	if(a == b and b == c)
	{
		cout << "Valido-Equilatero" << endl;
		cout << "Retangulo: N"  << endl;
	}
	
	else if (a == b or b == c or c == a)
	{
		cout << "Valido-Isoceles" << endl;
		cout << "Retangulo: N"  << endl;
	}
	
	else
	{
		cout << "Valido-Escaleno" << endl;
		
		if (a*a + b*b == c*c)
		{
			cout << "Retangulo: S" << endl;
		}	
		
		else cout << "Retangulo: N" << endl;
	}
	
	return 0;
	
}
