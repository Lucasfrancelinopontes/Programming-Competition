#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
    fastIO
    long long x,y; cin >> x >> y;

    vector <long long> q;

    for(int i = 0; i <x; i++){
        int abu; cin >> abu;
        q.push_back(abu);
    }
    for( int i = 0; i < y; i ++){
        long long a,b; cin >> a >> b;
        a = a-1;
        b = b-1;

        cout << accumulate(q.begin()+a,q.begin()+b+1,0LL) << "\n";
        
    }
}