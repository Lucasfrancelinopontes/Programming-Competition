#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

int n;
int ax, ay; 
int bx, by;
int cx, cy; 
bool vis[1005][1005]; 

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool dfs(int x, int y) {
    // Se chegou no destino
    if (x == cx && y == cy) {
        return true;
    }
    
    vis[x][y] = true;
    
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
            
            bool atacada = (nx == ax) || (ny == ay) || (abs(nx - ax) == abs(ny - ay));
            
            if (!atacada && !vis[nx][ny]) {
                if (dfs(nx, ny)) {
                    return true;
                }
            }
        }
    }
    
    return false;
}

void solve() {
    cin >> n;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    memset(vis, false, sizeof(vis));

    if (dfs(bx, by)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    fastio;
    int t = 1;
    // cin >> t; 
    while(t--) solve();
    return 0;
}