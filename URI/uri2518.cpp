#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int n;

	while(cin >> n){
		int a, b, c;
		cin >> a >> b >> c;

		double l = n * sqrt(a * a + b * b);

		cout << fixed << setprecision(4) << (c * l) / (100.0 * 100.0) << endl;
	}
	
	return 0;
}
