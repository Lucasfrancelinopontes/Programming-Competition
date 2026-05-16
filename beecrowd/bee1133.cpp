#include <bits/stdc++.h>

using namespace std;

int main(){
    int x=0,y=0;

    cin >> x >> y;

    for(int i =min(x,y)+1; i < max(x,y); i++ ){
        if(i%5 == 3 || i%5 == 2){
            cout << i << endl;
        }
    }
    return 0;
}