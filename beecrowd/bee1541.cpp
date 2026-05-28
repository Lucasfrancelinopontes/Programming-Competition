#include <bits/stdc++.h>

using namespace std;

int main(){
    double a =0,b=0,c=0;
    double area = 0;
    double total =0;

    while (cin >> a && a != 0 && cin >> b >>c)
    {
        area = a*b;

        total = floor(sqrt(area * (100/c)));

        cout << fixed << setprecision(0) << total << endl;
        
    }
    return 0;
}