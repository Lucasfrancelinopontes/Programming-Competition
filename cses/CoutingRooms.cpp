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

char mat[1000][1000];
bool vis[1000][1000];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void dfs(int x, int y,int sn,int sm){
    vis[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= sn || ny < 0 || ny >= sm)
            continue;

        if (mat[nx][ny] == '#')
            continue;

        if (vis[nx][ny])
            continue;

        dfs(nx, ny,sn,sm);
    }

    return;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin >> n >> m;
    int tt = 0;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mat[i][j] != '#'){
                if(!vis[i][j]){
                    dfs(i,j,n,m);
                    tt++;
                }
            }
        }
    }
    cout << tt << "\n";
    return 0;
}