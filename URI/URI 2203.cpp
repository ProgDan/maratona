#include <bits/stdc++.h>
using namespace std;

double dist(int x1, int y1, int x2, int y2)
{
	int dx = x1 - x2;
	int dy = y1 - y2;
	
	double d = sqrt(dx*dx + dy*dy);
	
	return d;
}


int main()
{
	int xf, yf, xi, yi, vi, r1, r2;
	
	while(cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2)
	{
		double d = dist(xf, yf, xi, yi);
		
		int range = r1 + r2;
		
		if (d + 1.5 * vi <= range) cout  << "Y" << endl;
		
		else cout << "N" << endl; 
	}
	
	return 0;
}
