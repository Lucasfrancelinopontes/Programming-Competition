#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double coelhos =0,ratos=0,sapos = 0;

    int v;
    char s;

    cin >> n;

    for(int i = 1; i <=n;i++){
        cin >> v >> s;

        if(s == 'C'){
            coelhos += v;
        }
        else if(s == 'R'){
            ratos += v;
        }
        else{
            sapos += v;
        }
    }
    int total =0;
    total = coelhos+ratos+sapos;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << fixed << setprecision(2)<< "Percentual de coelhos: " << coelhos/total * 100 << " %" << endl;
    cout << fixed << setprecision(2)<< "Percentual de ratos: " << ratos/total * 100 << " %" << endl;
    cout << fixed << setprecision(2)<< "Percentual de sapos: " << sapos/total * 100 << " %" << endl;
    return 0;
}