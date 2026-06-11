#include <bits/stdc++.h>

using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

int main(){
    fastIO
    
    ll n, c; 
    cin >> n >> c;

    // v guarda: v[posicao] = numero
    // posicao guarda: posicao[numero] = posicao
    vector<ll> v(n + 1);
    vector<ll> posicao(n + 1);
    
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        posicao[v[i]] = i;
    }

    // Calcula o ans inicial idêntico à Versão 1
    ll ans = 1;
    for(int i = 2; i <= n; i++){
        if(posicao[i] < posicao[i - 1]){
            ans++;
        }
    }

    while (c--) {
        ll x, y;
        cin >> x >> y;

        // Se mandarem trocar a mesma posição, a resposta não muda
        if (x == y) {
            cout << ans << endl;
            continue;
        }

        // 1. Descobre quem são os números nas posições x e y
        ll numA = v[x];
        ll numB = v[y];

        // 2. Cria um set para guardar os pares únicos que serão afetados
        // Guardamos sempre como {menor_numero, maior_numero} para o set filtrar duplicatas
        set<pair<ll, ll>> pares_afetados;

        if (numA > 1) pares_afetados.insert({numA - 1, numA});
        if (numA < n) pares_afetados.insert({numA, numA + 1});
        if (numB > 1) pares_afetados.insert({numB - 1, numB});
        if (numB < n) pares_afetados.insert({numB, numB + 1});

        // 3. RETIRA o efeito antigo desses pares do 'ans'
        for (auto par : pares_afetados) {
            ll u = par.first;
            ll v_num = par.second;
            if (posicao[v_num] < posicao[u]) {
                ans--;
            }
        }

        // 4. Faz a troca física real nos dois vetores
        swap(v[x], v[y]);
        swap(posicao[numA], posicao[numB]);

        // 5. ADICIONA o novo efeito desses mesmos pares no 'ans'
        for (auto par : pares_afetados) {
            ll u = par.first;
            ll v_num = par.second;
            if (posicao[v_num] < posicao[u]) {
                ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
