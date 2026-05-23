#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n =0, q=0;
    long long num =0 ;
    vector<long long> m;
    int ctd = 1;

    while(cin >> n >> q && n != 0 && q != 0)
    {

    for(int i = 0; i < n; i++)
    {
        cin >> num;
        m.push_back(num);
    }
    sort(m.begin(),m.end());
    cout << "CASE# " << ctd << ":" << endl;
    for(int i = 0; i < q; i++)
    {
        cin >> num;
        auto it = lower_bound(m.begin(), m.end(), num);
        
        if(it != m.end() && *it == num){
            long long posicao = distance(m.begin(), it) + 1; 
                
            cout << num << " found at " << posicao << endl;
        }
        else{
            cout << num << " not found" << endl;
        }
    }
    m.clear();
    ctd ++;
}
return 0;
}