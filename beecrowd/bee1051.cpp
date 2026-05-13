#include <bits/stdc++.h>

using namespace std;

int main(){
    double salario;
    cin >> salario;
    double total = 0.0;

    if(salario > 2000){
        salario = salario - 2000;
        if(salario > 2500){
            total += (salario - 2500) *0.28;
            salario = salario - (salario - 2500);
        }
        if(salario >= 1000){
            total += (salario - 1000) *0.18;
            salario = salario - (salario - 1000);
        }
        if(salario <= 1000){
            total += salario * 0.08;
        }
        cout << "R$ " << fixed << setprecision(2) << total << endl;
    }
    else{
        cout << "Isento" << endl;
    }
}