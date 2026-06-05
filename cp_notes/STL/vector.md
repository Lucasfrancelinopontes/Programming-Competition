# vector

Biblioteca:

Padrão ```#include <bits/stdc++.h```

Declaração:

```cpp
vector<int> v;
vector<int> v(n);
vector<int> v(n, 0);
```

## Inserção

```cpp
v.push_back(x);
```

Complexidade: O(1) amortizado

## Remoção

```cpp
v.pop_back();
```

Complexidade: O(1)

## Tamanho

```cpp
v.size();
```

Complexidade: O(1)

## Verificar vazio

```cpp
v.empty();
```

Complexidade: O(1)

## Primeiro e último elemento

```cpp
v.front();
v.back();
```

Complexidade: O(1)

## Acesso

```cpp
v[i];
```

Complexidade: O(1)

## Iteração

```cpp
for(int x : v){
    cout << x << '\n';
}
```

ou

```cpp
for(int i = 0; i < v.size(); i++){
    cout << v[i] << '\n';
}
```

## Ordenação

```cpp
sort(v.begin(), v.end());
```

Complexidade: O(n log n)

## Ordem decrescente

```cpp
sort(v.rbegin(), v.rend());
```

## Inverter

```cpp
reverse(v.begin(), v.end());
```

Complexidade: O(n)

## Busca binária

```cpp
lower_bound(v.begin(), v.end(), x);
upper_bound(v.begin(), v.end(), x);
```

Necessita vetor ordenado.

## Apagar elemento

```cpp
v.erase(v.begin() + pos);
```

Complexidade: O(n)

## Limpar vetor

```cpp
v.clear();
```

Complexidade: O(n)