#include <bits/stdc++.h>
using namespace std;

int main()
{
  // freopen("in.txt", "r", stdin);

  double a, b, c;
  while(cin >> a >> b >> c)
  {
      double s = (a + b + c) / 2;
      
      double A = sqrt( s * (s - a) * (s - b) * (s - c) );
      // area of the triangle

      double R = (a * b * c) / (4 * A);
      // radius of circumcircle

      double r = A / s;
      // radius of incircle

      double area_of_circimcircle = M_PI * R * R;
      double area_of_incircle     = M_PI * r * r;

      double sunflowers = area_of_circimcircle - A;
      double violets    = A - area_of_incircle;
      double roses      = area_of_incircle;

      cout << fixed << setprecision(4) << sunflowers << " " << violets << " " << roses << endl;
  }

    return 0;
}
