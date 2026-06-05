# set

Biblioteca:

```cpp
#include <set>
```

ou

```cpp
#include <bits/stdc++.h>
```

---

# O que é um set?

`set` é uma estrutura que:

* Mantém os elementos ordenados.
* Não permite elementos repetidos.
* Implementado internamente com árvore balanceada (Red-Black Tree).

Exemplo:

```cpp
set<int> s;

s.insert(5);
s.insert(2);
s.insert(5);
```

Resultado:

```cpp
2 5
```

---

# Declaração

```cpp
set<int> s;
```

Exemplos:

```cpp
set<string> nomes;
```

```cpp
set<pair<int,int>> pontos;
```

---

# Inserção

```cpp
s.insert(x);
```

Exemplo:

```cpp
s.insert(10);
s.insert(3);
s.insert(7);
```

Complexidade:

```cpp
O(log n)
```

---

# Remoção

## Remover valor

```cpp
s.erase(x);
```

Exemplo:

```cpp
s.erase(10);
```

Complexidade:

```cpp
O(log n)
```

---

## Remover iterador

```cpp
s.erase(it);
```

Exemplo:

```cpp
auto it = s.find(7);

s.erase(it);
```

Complexidade:

```cpp
O(log n)
```

---

# Verificar existência

## count

```cpp
s.count(x);
```

Retorna:

```cpp
0
```

ou

```cpp
1
```

Exemplo:

```cpp
if(s.count(10))
{
    cout << "Existe";
}
```

Complexidade:

```cpp
O(log n)
```

---

## find

```cpp
auto it = s.find(x);
```

Exemplo:

```cpp
if(s.find(10) != s.end())
{
    cout << "Existe";
}
```

Complexidade:

```cpp
O(log n)
```

---

# Tamanho

```cpp
s.size();
```

Complexidade:

```cpp
O(1)
```

---

# Verificar vazio

```cpp
s.empty();
```

Complexidade:

```cpp
O(1)
```

---

# Limpar set

```cpp
s.clear();
```

Complexidade:

```cpp
O(n)
```

---

# Primeiro elemento

```cpp
*s.begin()
```

Exemplo:

```cpp
cout << *s.begin();
```

Complexidade:

```cpp
O(1)
```

---

# Último elemento

```cpp
*prev(s.end())
```

Exemplo:

```cpp
cout << *prev(s.end());
```

Complexidade:

```cpp
O(1)
```

---

# Iteração

## Range Based For

```cpp
for(int x : s)
{
    cout << x << '\n';
}
```

---

## Com iterador

```cpp
for(auto it = s.begin(); it != s.end(); it++)
{
    cout << *it << '\n';
}
```

---

# lower_bound

Primeiro elemento ≥ x.

```cpp
auto it = s.lower_bound(x);
```

Exemplo:

```cpp
set<int> s = {1,3,5,7};

auto it = s.lower_bound(4);
```

Resultado:

```cpp
5
```

Complexidade:

```cpp
O(log n)
```

---

# upper_bound

Primeiro elemento > x.

```cpp
auto it = s.upper_bound(x);
```

Exemplo:

```cpp
set<int> s = {1,3,5,7};

auto it = s.upper_bound(5);
```

Resultado:

```cpp
7
```

Complexidade:

```cpp
O(log n)
```

---

# Percorrer ao contrário

```cpp
for(auto it = s.rbegin(); it != s.rend(); it++)
{
    cout << *it << '\n';
}
```

---

# Set de pair

Muito comum em CP.

```cpp
set<pair<int,int>> s;
```

Exemplo:

```cpp
s.insert({2,3});
s.insert({1,5});
s.insert({1,2});
```

Ordem:

```cpp
{1,2}
{1,5}
{2,3}
```

---

# Encontrar predecessor

Maior elemento < x.

```cpp
auto it = s.lower_bound(x);

if(it != s.begin())
{
    --it;
}
```

Exemplo:

```cpp
set<int> s = {1,3,5,7};

x = 6
```

Resultado:

```cpp
5
```

---

# Encontrar sucessor

Menor elemento ≥ x.

```cpp
auto it = s.lower_bound(x);
```

Exemplo:

```cpp
set<int> s = {1,3,5,7};

x = 4
```

Resultado:

```cpp
5
```

---

# Construir a partir de vetor

```cpp
vector<int> v = {1,2,2,3,3,3};

set<int> s(v.begin(), v.end());
```

Resultado:

```cpp
1 2 3
```

---

# Remover duplicatas de um vetor

```cpp
vector<int> v = {1,2,2,3,3,3};

set<int> s(v.begin(), v.end());

v.assign(s.begin(), s.end());
```

Resultado:

```cpp
1 2 3
```

---

# Uso comum em Programação Competitiva

## Verificar elementos únicos

```cpp
set<int> s;
```

---

## Remover duplicatas

```cpp
set<int> s(v.begin(), v.end());
```

---

## Buscar predecessor e sucessor

```cpp
lower_bound
upper_bound
```

---

## Manter valores ordenados dinamicamente

```cpp
set<int> s;
```

Inserções e remoções:

```cpp
O(log n)
```

---

## Sweep Line

```cpp
set<int> ativos;
```

---

## Dijkstra

Às vezes utilizado para simular:

```cpp
priority_queue
```

Exemplo:

```cpp
set<pair<int,int>> fila;
```

Formato:

```cpp
{distancia, vertice}
```

---

# Complexidades

| Operação    | Complexidade |
| ----------- | ------------ |
| insert      | O(log n)     |
| erase       | O(log n)     |
| find        | O(log n)     |
| count       | O(log n)     |
| lower_bound | O(log n)     |
| upper_bound | O(log n)     |
| size        | O(1)         |
| begin       | O(1)         |

---

# Dicas

* `set` mantém os elementos sempre ordenados.
* Não permite valores repetidos.
* Quase todas as operações custam `O(log n)`.
* Para permitir repetidos use:

```cpp
multiset<int>
```

* Para busca média O(1), use:

```cpp
unordered_set<int>
```

mas sem garantia de ordenação.

---

# Comparação rápida

| Estrutura     | Ordenado | Repetidos | Busca      |
| ------------- | -------- | --------- | ---------- |
| set           | Sim      | Não       | O(log n)   |
| multiset      | Sim      | Sim       | O(log n)   |
| unordered_set | Não      | Não       | O(1) médio |
