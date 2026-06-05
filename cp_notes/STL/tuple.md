# tuple

Biblioteca:

```cpp
#include <tuple>
```

ou

```cpp
#include <bits/stdc++.h>
```

---

# O que é um tuple?

Um `tuple` é uma generalização do `pair`.

Enquanto um `pair` armazena exatamente 2 valores:

```cpp
pair<int,int> p;
```

um `tuple` pode armazenar vários tipos:

```cpp
tuple<int,int,int> t;
```

```cpp
tuple<string,int,double> aluno;
```

---

# Declaração

```cpp
tuple<int,int,int> t;
```

Exemplo:

```cpp
tuple<int,int,int> ponto;
```

---

# Inicialização

```cpp
tuple<int,int,int> t = {1,2,3};
```

ou

```cpp
tuple<int,int,int> t(1,2,3);
```

ou

```cpp
auto t = make_tuple(1,2,3);
```

---

# Acesso aos elementos

Utiliza-se `get<indice>()`.

```cpp
get<0>(t);
get<1>(t);
get<2>(t);
```

Exemplo:

```cpp
tuple<int,int,int> t = {10,20,30};

cout << get<0>(t);
cout << get<1>(t);
cout << get<2>(t);
```

Saída:

```cpp
10
20
30
```

Complexidade:

```cpp
O(1)
```

---

# Alterar valores

```cpp
get<0>(t) = 100;
```

Exemplo:

```cpp
tuple<int,int,int> t = {1,2,3};

get<1>(t) = 50;
```

Resultado:

```cpp
{1,50,3}
```

---

# Structured Binding (C++17)

Forma mais usada atualmente.

```cpp
auto [a,b,c] = t;
```

Exemplo:

```cpp
tuple<int,int,int> t = {10,20,30};

auto [x,y,z] = t;
```

Agora:

```cpp
x = 10
y = 20
z = 30
```

---

# Comparação

Assim como pair, utiliza comparação lexicográfica.

Primeiro compara:

```cpp
get<0>()
```

Se empatar:

```cpp
get<1>()
```

e assim por diante.

Exemplo:

```cpp
tuple<int,int,int> a = {1,2,3};
tuple<int,int,int> b = {1,2,4};

cout << (a < b);
```

Resultado:

```cpp
1
```

Pois:

```cpp
3 < 4
```

---

# Swap

```cpp
swap(a,b);
```

Exemplo:

```cpp
tuple<int,int,int> a = {1,2,3};
tuple<int,int,int> b = {4,5,6};

swap(a,b);
```

Resultado:

```cpp
a = {4,5,6}
b = {1,2,3}
```

Complexidade:

```cpp
O(1)
```

---

# Tie

Permite desempacotar um tuple.

```cpp
tie(a,b,c) = t;
```

Exemplo:

```cpp
tuple<int,int,int> t = {10,20,30};

int x,y,z;

tie(x,y,z) = t;
```

Agora:

```cpp
x = 10
y = 20
z = 30
```

---

# Ignorando valores

Usando `ignore`.

```cpp
tie(x, ignore, z) = t;
```

Exemplo:

```cpp
tuple<int,int,int> t = {10,20,30};

int x,z;

tie(x, ignore, z) = t;
```

Resultado:

```cpp
x = 10
z = 30
```

---

# Vetor de tuples

Muito comum em CP.

```cpp
vector<tuple<int,int,int>> v;
```

Inserção:

```cpp
v.push_back({1,2,3});
```

ou

```cpp
v.emplace_back(1,2,3);
```

---

# Ordenação

```cpp
sort(v.begin(), v.end());
```

A ordenação é lexicográfica.

Exemplo:

```cpp
{
    {2,1,3},
    {1,5,2},
    {1,2,9}
}
```

Após:

```cpp
{
    {1,2,9},
    {1,5,2},
    {2,1,3}
}
```

Complexidade:

```cpp
O(n log n)
```

---

# Ordenação personalizada

Ordenar pelo terceiro elemento:

```cpp
sort(
    v.begin(),
    v.end(),
    [](auto a, auto b){
        return get<2>(a) < get<2>(b);
    }
);
```

---

# Tamanho do tuple

Em tempo de compilação.

```cpp
tuple_size<decltype(t)>::value
```

Exemplo:

```cpp
tuple<int,int,double> t;

cout << tuple_size<decltype(t)>::value;
```

Saída:

```cpp
3
```

---

# Uso comum em Programação Competitiva

## Coordenadas 3D

```cpp
tuple<int,int,int> ponto;
```

---

## Estados de BFS

```cpp
queue<tuple<int,int,int>> q;
```

Formato:

```cpp
{x,y,dist}
```

---

## Eventos

```cpp
vector<tuple<int,int,int>> eventos;
```

Formato:

```cpp
{tempo,tipo,id}
```

---

## Dijkstra

```cpp
priority_queue<
    tuple<int,int,int>,
    vector<tuple<int,int,int>>,
    greater<tuple<int,int,int>>
> pq;
```

Formato:

```cpp
{distancia,vertice,estado}
```

---

# Complexidades

| Operação   | Complexidade |
| ---------- | ------------ |
| get<i>()   | O(1)         |
| comparação | O(k)         |
| swap       | O(k)         |
| cópia      | O(k)         |

Onde:

```cpp
k = quantidade de elementos
```

---

# Dicas

* Use `pair` quando tiver apenas 2 valores.
* Use `tuple` quando precisar de 3 ou mais valores.
* Prefira `structured bindings` (`auto [a,b,c]`) em C++17.
* Muito útil para BFS, Dijkstra e ordenação de múltiplos critérios.
* Tuples já possuem comparação lexicográfica automática.
