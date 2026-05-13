#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x,y;

    cin >> x >> y;
    long long soma = 0;
    if (x > y)
    {
        if(y%2 ==0){
            for(long long i = y+1; i < x; i+=2){
                soma += i;
            }
        }
        else{
            for(long long i = y+2; i < x; i+=2){
                soma += i;
        }
        }
        cout << soma << endl;
    }
    else if(y > x){
        if(x%2 ==0){
            for(long long i = x+1; i < y; i+=2){
                soma += i;
            }
        }
        else{
            for(long long i = x+2; i < y; i+=2){
                soma += i;
        }
        }
        cout << soma << endl;
    }
    else{
        cout << 0 << endl;
    }
    
}