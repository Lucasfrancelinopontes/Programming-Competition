#include <bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    int c =0;
    int qtd1=0,qtd2=0;
    int total =0;
    int n =0;
    cin >> t;
    while(t--){
        cin >> c;
        for(int i =1; i <=c;i++){
            cin >> n;

            if(n == 0){
                total++;
            }
            else if(n == 1){
                qtd1++;
            }
            else{
                qtd2++;
            }
        }
        total += min(qtd1,qtd2) + (abs((qtd1-qtd2))/3);
        cout << total << endl;
        total=0,qtd1=0,qtd2=0;
    }
    return 0;
}