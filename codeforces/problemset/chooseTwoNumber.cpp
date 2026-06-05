#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << ' = ' << x << endl;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f11;

int main(){

    fastIO
    
    int n = 0;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m =0;
    cin >> m;
    vector <int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    cout << a.back() << " " << b.back() << endl;

return 0;
}