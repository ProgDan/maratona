#include <bits/stdc++.h>
using namespace std;

void Result(double avg);
void Print(double avg);

int main(void)
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double avg = (a * 2 + b * 3 + c * 4 + d) / 10.0;
    cout << fixed << setprecision(1) << "Media: " << avg << endl;
    Result(avg);

    return 0;
}

void Print(double avg)
{
    if(avg >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if(avg >= 5.0 and avg < 7.0)
        cout << "Aluno em exame." << endl;
    else
        cout << "Aluno reprovado." << endl;
}

void Result(double avg)
{
    if(avg >= 5.0 and avg < 7.0){
        Print(avg);
        double d;
        cin >> d;
        avg += d;
        avg /= 2.0;

        cout << fixed << setprecision(1) << "Nota do exame: " << d << endl;
        if(avg >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << fixed << setprecision(1) << "Media final: " << avg << endl;
    }
    else
        Print(avg);
}
