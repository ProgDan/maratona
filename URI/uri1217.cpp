#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin);
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	double d, ts = 0;
	int t = 0;
	vector<int> v;
	string s;
	for(int i = 0; i < T; i++){
		cin >> d;
		ts += d;
		cin.ignore();
		getline(cin, s);

		stringstream ss(s);
		string a;
		int con = 0;
		while(ss >> a)
			con++;

		v.push_back(con);
		t += con;
	}

	for(int i = 0; i < v.size(); i++)
		cout << "day " << i + 1 << ": " << v[i] << " kg" << endl;
	cout << fixed << setprecision(2) << (t * 1.0) / T << " kg by day" << endl;
	cout << fixed << setprecision(2) << "R$ " << ts / T << " by day" << endl;

	return 0;
}
