#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
 
    while ( cin >> str )
    {
        int len = str.length(), cnt = 0;
        {
            for ( int i = 0; i < len; i++ )
            {
                if ( str[i] == '1' ) cnt++;
            }
        }
 
        if ( cnt % 2 == 0 ) str.append ( "0" );
 
        else str.append ( "1" );
 
        cout << str << endl;
    }
 
    return 0;
}
