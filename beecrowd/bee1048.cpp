#include <bits/stdc++.h>

using namespace std;

int main(){
    double salario;
    double reajuste;

    cin >> salario;

    if(salario <= 400.00){
        reajuste = salario * 0.15;
        cout << "Novo salario: " << fixed << setprecision(2) << salario+reajuste<< endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if(salario <= 800.00){
        reajuste = salario * 0.12;
        cout << "Novo salario: " << fixed << setprecision(2) << salario+reajuste<< endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if(salario <= 1200.00){
        reajuste = salario * 0.1;
        cout << "Novo salario: " << fixed << setprecision(2) << salario+reajuste<< endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if(salario <= 2000.00){
        reajuste = salario * 0.07;
        cout << "Novo salario: " << fixed << setprecision(2) << salario+reajuste<< endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else{
        reajuste = salario * 0.04;
        cout << "Novo salario: " << fixed << setprecision(2) << salario+reajuste<< endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
        cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}