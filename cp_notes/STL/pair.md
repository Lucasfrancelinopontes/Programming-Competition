# pair

Biblioteca:

```cpp
#include <utility>
```

ou

```cpp
#include <bits/stdc++.h>
```

## Declaração

```cpp
pair<int, int> p;
```

ou

```cpp
pair<string, int> aluno;
```

## Inicialização

```cpp
pair<int, int> p = {10, 20};
```

ou

```cpp
pair<int, int> p(10, 20);
```

ou

```cpp
auto p = make_pair(10, 20);
```

## Acesso aos elementos

```cpp
p.first;
p.second;
```

Exemplo:

```cpp
pair<int, int> p = {5, 8};

cout << p.first;   // 5
cout << p.second;  // 8
```

Complexidade: O(1)

---

## Alteração dos valores

```cpp
p.first = 100;
p.second = 200;
```

Exemplo:

```cpp
pair<int, int> p;

p.first = 3;
p.second = 7;
```

---

## Comparação

Os pares são comparados lexicograficamente.

Primeiro compara `first`.
Se empatar, compara `second`.

Exemplo:

```cpp
pair<int, int> a = {1, 5};
pair<int, int> b = {2, 1};

cout << (a < b);
```

Resultado:

```cpp
1
```

Pois:

```cpp
1 < 2
```

Outro exemplo:

```cpp
pair<int, int> a = {1, 5};
pair<int, int> b = {1, 8};

cout << (a < b);
```

Resultado:

```cpp
1
```

Pois:

```cpp
5 < 8
```

---

## Swap

```cpp
swap(a, b);
```

Exemplo:

```cpp
pair<int, int> a = {1, 2};
pair<int, int> b = {3, 4};

swap(a, b);
```

Após:

```cpp
a = {3, 4}
b = {1, 2}
```

Complexidade: O(1)

---

## Structured Binding (C++17)

Permite desempacotar o par.

```cpp
auto [x, y] = p;
```

Exemplo:

```cpp
pair<int, int> p = {10, 20};

auto [x, y] = p;

cout << x << " " << y;
```

Saída:

```cpp
10 20
```

---

## Vetor de pares

```cpp
vector<pair<int,int>> v;
```

Inserção:

```cpp
v.push_back({1, 2});
```

ou

```cpp
v.emplace_back(1, 2);
```

Exemplo:

```cpp
vector<pair<int,int>> v;

v.push_back({5, 10});
v.push_back({3, 7});
```

---

## Ordenação de pares

```cpp
sort(v.begin(), v.end());
```

Ordena por:

1. first
2. second

Exemplo:

```cpp
vector<pair<int,int>> v = {
    {2,3},
    {1,5},
    {1,2}
};

sort(v.begin(), v.end());
```

Resultado:

```cpp
{1,2}
{1,5}
{2,3}
```

Complexidade: O(n log n)

---

## Ordenação personalizada

Ordenar pelo segundo elemento:

```cpp
sort(v.begin(), v.end(),
    [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    }
);
```

Exemplo:

```cpp
vector<pair<int,int>> v = {
    {1,10},
    {2,5},
    {3,8}
};
```

Após ordenar:

```cpp
{2,5}
{3,8}
{1,10}
```

---

## Uso comum em programação competitiva

### Coordenadas

```cpp
pair<int,int> ponto = {x, y};
```

### BFS em grade

```cpp
queue<pair<int,int>> q;
```

### Arestas

```cpp
vector<pair<int,int>> arestas;
```

### Dijkstra

```cpp
priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> pq;
```

Formato:

```cpp
{distancia, vertice}
```

---

## Complexidades

| Operação | Complexidade |
|-----------|------------|
| first | O(1) |
| second | O(1) |
| comparação | O(1) |
| swap | O(1) |
| cópia | O(1) |

---

## Dicas

- `pair` é ideal para armazenar exatamente dois valores relacionados.
- Comparações lexicográficas funcionam automaticamente.
- Muito usado em grafos, geometria e ordenações.
- Em C++17, prefira:

```cpp
auto [x, y] = p;
```

ao invés de:

```cpp
int x = p.first;
int y = p.second;
```