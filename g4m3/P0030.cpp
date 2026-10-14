#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define F first
#define S second

struct Point {
    double x, y;
};

double dist2(Point a, Point b) {
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

void solve() {
    int tc;
    cin >> tc;
    
    Point p[3];
    for (int i = 0; i < 3; i++) {
        cin >> p[i].x >> p[i].y;
    }
    
    double d01 = dist2(p[0], p[1]);
    double d02 = dist2(p[0], p[2]);
    double d12 = dist2(p[1], p[2]);
    
    Point p4;
    
    if (d01 >= d02 && d01 >= d12) {
        p4.x = p[0].x + p[1].x - p[2].x;
        p4.y = p[0].y + p[1].y - p[2].y;
    } 
    else if (d02 >= d01 && d02 >= d12) {
        p4.x = p[0].x + p[2].x - p[1].x;
        p4.y = p[0].y + p[2].y - p[1].y;
    } 
    else {
        p4.x = p[1].x + p[2].x - p[0].x;
        p4.y = p[1].y + p[2].y - p[0].y;
    }
    
    cout << tc << " " << fixed << setprecision(9) << p4.x << " " << p4.y << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }

    return 0;
}