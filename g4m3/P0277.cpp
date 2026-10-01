#include <bits/stdc++.h>
using namespace std;

char mat[3][3];
bool vis[3][3];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int dfs(int x, int y) {
    vis[x][y] = true;

    int ans = 1;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= 3 || ny < 0 || ny >= 3)
            continue;

        if (mat[nx][ny] == 'X')
            continue;

        if (vis[nx][ny])
            continue;

        ans += dfs(nx, ny);
    }

    return ans;
}

int main() {
    int x, y;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];

            if (mat[i][j] == 'K') {
                x = i;
                y = j;
            }
        }
    }

    cout << dfs(x, y) << '\n';
}