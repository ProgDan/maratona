#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{	
	int T;
	cin >> T;
		
	for(int i = 0, n, q; i < T; i++){
		cin >> n;

		map<string, double> m;
		string s;
		double d, sum = 0.0;
		for(int j = 0; j < n; j++){
			cin >> s >> d;
			m[s] = d;
		}

		cin >> q;
		for(int j = 0, p; j < q; j++){
			cin >> s >> p;

			sum += m.find(s)->second * p;
		}

		cout << fixed << setprecision(2) << "R$ " << sum << endl;
	}

	return 0;
}
