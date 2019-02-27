#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	string name;	
	double difficulty, scores[7], total;
	
	cin >> N;
	
	while(N--)
	{
		cin >> name;
		cin >> difficulty;
		
		total = 0;
		
		for(int i = 0; i < 7; i++)
		{
			cin >> scores[i];
			total += scores[i];
		}
		
		size_t size = sizeof(scores) / sizeof(scores[0]);
		sort(scores, scores + size);
		
		total = total - (scores[0] + scores[6]);
		
		cout << name << " " << fixed << setprecision(2) << total * difficulty << endl;
	}
	
	return 0;
}
