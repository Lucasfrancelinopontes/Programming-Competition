#include <bits/stdc++.h>
using namespace std;

vector<string> board(8);

bool col[8];
bool diag1[15];
bool diag2[15];

int solve(int row) {
    if (row == 8)
        return 1;

    int ans = 0;

    for (int c = 0; c < 8; c++) {
        if (board[row][c] == '*')
            continue;

        if (col[c])
            continue;

        if (diag1[row - c + 7])
            continue;

        if (diag2[row + c])
            continue;

        col[c] = true;
        diag1[row - c + 7] = true;
        diag2[row + c] = true;

        ans += solve(row + 1);

        col[c] = false;
        diag1[row - c + 7] = false;
        diag2[row + c] = false;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (auto &row : board)
        cin >> row;

    cout << solve(0) << '\n';
}