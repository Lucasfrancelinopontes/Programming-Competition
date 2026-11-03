#include <bits/stdc++.h>

using namespace std;

int main(){
    double x,y; cin >> x >> y;
    if(x != 0){
        if(y != 0){
            if(x > 0){
                if(y > 0){
                    cout << "Q1\n";
                }
                else{
                    cout << "Q4\n";
                }
            }
            else{
                if(y > 0){
                    cout << "Q2\n";
                }
                else{
                    cout << "Q3\n";
                }
            }
        }
        else{
            cout << "Eixo X\n";
        }
    }
    else{
        if(y!= 0){
            cout << "Eixo Y\n";
        }
        else{
            cout << "Origem\n";
        }
    }
}