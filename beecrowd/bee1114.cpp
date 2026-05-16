#include <bits/stdc++.h>

using namespace std;

int main(){

    int senha =0;
    while(true){

        cin>> senha;
    
        if(senha == 2002){
            cout << "Acesso Permitido" << endl;
            break;
        }
        else{
            cout << "Senha Invalida" << endl;
        }
    }

    return 0;
}