#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

static const int MOD = 1e9 + 7;

//isso foi eu e a i.a. Não estudei Interpolação de Lagrange o suficiente rs

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll modInverse(ll n) {
    return power(n, MOD - 2);
}

void solve() {
    ll n, k;
    if (!(cin >> n >> k)) return;

    if (k == 0) {
        cout << n % MOD << "\n";
        return;
    }

    int lim = k + 2;

    if (n <= lim) {
        ll ans = 0;
        for (ll i = 1; i <= n; ++i) {
            ans = (ans + power(i, k)) % MOD;
        }
        cout << ans << "\n";
        return;
    }

    vector<ll> y(lim + 1, 0);
    for (int i = 1; i <= lim; ++i) {
        y[i] = (y[i - 1] + power(i, k)) % MOD;
    }

    vector<ll> pref(lim + 2, 1), suf(lim + 2, 1);
    for (int i = 1; i <= lim; ++i) {
        pref[i] = (pref[i - 1] * ((n - i) % MOD)) % MOD;
    }
    for (int i = lim; i >= 1; --i) {
        suf[i] = (suf[i + 1] * ((n - i) % MOD)) % MOD;
    }

    vector<ll> fact(lim + 1, 1);
    for (int i = 1; i <= lim; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    ll total_sum = 0;

    for (int i = 1; i <= lim; ++i) {
        ll num = (pref[i - 1] * suf[i + 1]) % MOD;
        ll den = (fact[i - 1] * fact[lim - i]) % MOD;

        if ((lim - i) % 2 != 0) {
            den = (MOD - den) % MOD;
        }

        ll term = y[i] * num % MOD;
        term = term * modInverse(den) % MOD;

        total_sum = (total_sum + term) % MOD;
    }

    cout << (total_sum + MOD) % MOD << "\n";
}

int main() {
    fastio;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}