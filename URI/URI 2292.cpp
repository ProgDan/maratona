#include <bits/stdc++.h>
using namespace std;

char toggle_light(char light)
{
	if(light == 'O') return 'X';
	else if (light == 'X') return 'O';
}

int main()
{
	int N, len;
	long long int C;
	string lights;
	char light;
	
	cin >> N;
	
	while(N--)
	{
		cin >> lights >> C;
		len = lights.length();
		
		for(int i = 0; i < len; i++)
		{
			light = lights[i];
			
			if(C%2) {cout << toggle_light(light);}
			else {cout << light;}
			
			if(light == 'O') { C++; }
			C/=2;
		}
		cout << endl;
	}
	
	return 0;
}
