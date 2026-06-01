#include <bits/stdc++.h>

using namespace std;

double media(){
    double n1 =-1,n2=-1;

    while(true){
        cin >> n1;
        if(n1 <0 || n1 > 10){
            cout << "nota invalida" << endl;
        }
        else{
            break;
        }
    }
    while(true){
        cin >> n2;
        if(n2 <0 || n2 > 10){
            cout << "nota invalida" << endl;
        }
        else{
            break;
        }
    }
    cout << fixed << setprecision(2) << "media = " << (n1+n2)/2 << endl;
    return 0;
}

int main(){
    int cdg = 1;
    while (cdg ==1)
    {
        media();
        while (true)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> cdg;

            if(cdg == 2 || cdg == 1){
                break;
            }
            
        }
        
    }
    return 0;
}