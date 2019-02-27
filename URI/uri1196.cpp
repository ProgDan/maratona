#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

char change(char a);

int main(void)
{
	string s;

	while(getline(cin, s)){
		for(int i = 0; i < s.length(); i++)
			s[i] = change(s[i]);

		cout << s << endl;
	}

	return 0;
}

char change(char a)
{
	if(a >= '2' and a <= '9')
		return a - 1;
	switch(a)
	{
		case '=':
			return '-';
		case '-':
			return '0';
		case '0':
			return '9';
		case '1':
			return '`';
		case '\\':
			return ']';
		case ']':
			return '[';
		case '[':
			return 'P';
		case 'P':
			return 'O';
		case 'O':
			return 'I';
		case 'I':
			return 'U';
		case 'U':
			return 'Y';
		case 'Y':
			return 'T';
		case 'T':
			return 'R';
		case 'R':
			return 'E';
		case 'E':
			return 'W';
		case 'W':
			return 'Q';
		case '\'':
			return ';';
		case ';':
			return 'L';
		case 'L':
			return 'K';
		case 'K':
			return 'J';
		case 'J':
			return 'H';
		case 'H':
			return 'G';
		case 'G':
			return 'F';
		case 'F':
			return 'D';
		case 'D':
			return 'S';
		case 'S':
			return 'A';
		case '/':
			return '.';
		case '.':
			return ',';
		case ',':
			return 'M';
		case 'M':
			return 'N';
		case 'N':
			return 'B';
		case 'B':
			return 'V';
		case 'V':
			return 'C';
		case 'C':
			return 'X';
		case 'X':
			return 'Z';
		default:
			return a;
	}
}
