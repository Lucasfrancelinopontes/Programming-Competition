#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end();
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    deque<string> f;
    string nome;

    while (cin >> nome)
    {
        if (nome == "FIM")
        {
            break;
        }

        if (nome == "PROXIMO")
        {
            cout << "PROXIMO: " << f.front() << "\n";
            f.pop_front();
        }
        else
        {
            f.push_back(nome);
            cout << "FILA: ";
            for (auto x : f)
                cout << x << " ";
            cout << '\n';
        }
    }
}

int main()
{
    fastio;
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}