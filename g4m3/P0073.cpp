#include <bits/stdc++.h>
using namespace std;

char b[3][3];
long long winX = 0, winO = 0;

bool venceu(char c) {
    for (int i = 0; i < 3; i++) {
        if (b[i][0] == c && b[i][1] == c && b[i][2] == c)
            return true;

        if (b[0][i] == c && b[1][i] == c && b[2][i] == c)
            return true;
    }

    if (b[0][0] == c && b[1][1] == c && b[2][2] == c)
        return true;

    if (b[0][2] == c && b[1][1] == c && b[2][0] == c)
        return true;

    return false;
}

void dfs() {
    if (venceu('X')) {
        winX++;
        return;
    }

    if (venceu('O')) {
        winO++;
        return;
    }

    int cntX = 0, cntO = 0, empty = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cntX += b[i][j] == 'X';
            cntO += b[i][j] == 'O';
            empty += b[i][j] == '.';
        }
    }

    if (!empty)
        return;

    char player = (cntX == cntO ? 'X' : 'O');

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (b[i][j] == '.') {
                b[i][j] = player;
                dfs();
                b[i][j] = '.';
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> b[i][j];

    dfs();

    cout << winX << ' ' << winO << '\n';
}