#include <bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("in.txt", "r", stdin);

   int n;
   bool first_case = true;

   while(cin >> n && n)
   {
       vector<string> v;
       string str;
       int max_len = 0;

       for(int i = 0; i < n; i++)
       {
           cin >> str;
           max_len = max(max_len, (int)str.size());
           v.push_back(str);
       }

       if(first_case == true) {first_case = false;}
       else cout << endl;

       for(string s : v)   
       {
           cout << setw(max_len) << s << endl;
       }
   }

    return 0;
}
