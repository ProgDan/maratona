
#include <bits/stdc++.h>
using namespace std;


bool is_vowel(char ch)
{
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
	
	return false;
}


int main()
{
	string str;
	cin >> str;
	
	vector<char> v;
	
	for(int i = 0; i < str.length(); i++)
	{
		if( is_vowel(str[i]) == true ) v.push_back(str[i]);
	}
	
	int i = 0, f = v.size() - 1;
	
	while(i < f)
	{
		if(v[i] != v[f])
		{	
			cout << "N" << endl;
			return 0;
		}
		
		i++;
		f--;
	}
	
	cout << "S" << endl;
	return 0;

}
