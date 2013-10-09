/* 
 * File:   METEORO.cpp
 * Author: progdan
 *
 * Solução para o problema "Meteoros" da OBI2001
 * 
 * Created on October 9, 2013, 3:28 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n=1;
	int N, X, Y;
	int X1, Y1, X2, Y2;
	int i, total;

	while (1) {
		// Lê fazenda
		cin >> X1 >> Y1 >> X2 >> Y2;
		if (X1 == 0 && Y1 == 0) break;
		cin >> N;
		total = 0;
		
		// Le meteoritos
		for (i=0; i<N; i++) {
			cin >> X >> Y;
			if (X >= X1 && X <=X2 && Y <= Y1 && Y >= Y2)
				total++;
		}
		cout << "Teste " << n++ << endl << total << endl << endl;
	}
    return 0;
}
