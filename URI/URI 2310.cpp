#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	string name;
	int serve, block, attack;
	int suc_serve, suc_block, suc_attack;
	double total_serve = 0, total_block = 0, total_attack = 0;
	double total_suc_serve = 0, total_suc_block = 0, total_suc_attack = 0;
	
	
	cin >> N;
	
	while(N--)
	{
		cin >> name;
		cin >> serve >> block >> attack;
		cin >> suc_serve >> suc_block >> suc_attack;
		
		total_serve += serve;
		total_block += block;
		total_attack += attack;
		
		total_suc_serve += suc_serve;
		total_suc_block += suc_block;
		total_suc_attack += suc_attack;
	}
	
	cout << "Pontos de Saque: " << fixed << setprecision(2) << total_suc_serve / total_serve * 100 << " %." << endl;
	cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << total_suc_block / total_block * 100 << " %." << endl;
	cout << "Pontos de Ataque: " << fixed << setprecision(2) << total_suc_attack / total_attack * 100 << " %." << endl;
	
	return 0;
}
