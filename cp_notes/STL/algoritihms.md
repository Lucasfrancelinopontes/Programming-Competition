# algorithm

Biblioteca:

```cpp
#include <algorithm>
```

ou

```cpp
#include <bits/stdc++.h>
```

---

# sort

Ordena um intervalo.

```cpp
sort(v.begin(), v.end());
```

Exemplo:

```cpp
vector<int> v = {5, 2, 8, 1};

sort(v.begin(), v.end());
```

Resultado:

```cpp
1 2 5 8
```

Complexidade:

```cpp
O(n log n)
```

---

# sort decrescente

```cpp
sort(v.rbegin(), v.rend());
```

ou

```cpp
sort(v.begin(), v.end(), greater<int>());
```

Resultado:

```cpp
8 5 2 1
```

Complexidade:

```cpp
O(n log n)
```

---

# reverse

Inverte um intervalo.

```cpp
reverse(v.begin(), v.end());
```

Exemplo:

```cpp
1 2 3 4
```

↓

```cpp
4 3 2 1
```

Complexidade:

```cpp
O(n)
```

---

# min

Retorna o menor valor.

```cpp
min(a, b);
```

Exemplo:

```cpp
min(5, 2);
```

Resultado:

```cpp
2
```

Complexidade:

```cpp
O(1)
```

---

# max

Retorna o maior valor.

```cpp
max(a, b);
```

Exemplo:

```cpp
max(5, 2);
```

Resultado:

```cpp
5
```

Complexidade:

```cpp
O(1)
```

---

# min_element

Retorna iterador para o menor elemento.

```cpp
auto it = min_element(v.begin(), v.end());
```

Exemplo:

```cpp
int mn = *min_element(v.begin(), v.end());
```

Complexidade:

```cpp
O(n)
```

---

# max_element

Retorna iterador para o maior elemento.

```cpp
auto it = max_element(v.begin(), v.end());
```

Exemplo:

```cpp
int mx = *max_element(v.begin(), v.end());
```

Complexidade:

```cpp
O(n)
```

---

# count

Conta ocorrências.

```cpp
count(v.begin(), v.end(), x);
```

Exemplo:

```cpp
count(v.begin(), v.end(), 5);
```

Complexidade:

```cpp
O(n)
```

---

# find

Procura um elemento.

```cpp
auto it = find(v.begin(), v.end(), x);
```

Verificação:

```cpp
if(it != v.end())
```

Complexidade:

```cpp
O(n)
```

---

# binary_search

Verifica se elemento existe.

Necessita vetor ordenado.

```cpp
binary_search(v.begin(), v.end(), x);
```

Retorna:

```cpp
true
```

ou

```cpp
false
```

Complexidade:

```cpp
O(log n)
```

---

# lower_bound

Primeira posição ≥ x.

Necessita vetor ordenado.

```cpp
auto it = lower_bound(v.begin(), v.end(), x);
```

Índice:

```cpp
int pos = it - v.begin();
```

Complexidade:

```cpp
O(log n)
```

Exemplo:

```cpp
1 3 3 3 7 9
```

```cpp
lower_bound(...,3)
```

Retorna índice:

```cpp
1
```

---

# upper_bound

Primeira posição > x.

Necessita vetor ordenado.

```cpp
auto it = upper_bound(v.begin(), v.end(), x);
```

Índice:

```cpp
int pos = it - v.begin();
```

Complexidade:

```cpp
O(log n)
```

Exemplo:

```cpp
1 3 3 3 7 9
```

```cpp
upper_bound(...,3)
```

Retorna índice:

```cpp
4
```

---

# next_permutation

Gera próxima permutação.

```cpp
next_permutation(v.begin(), v.end());
```

Exemplo:

```cpp
1 2 3
```

↓

```cpp
1 3 2
```

Uso clássico:

```cpp
sort(v.begin(), v.end());

do {
    // usa permutação
}
while(next_permutation(v.begin(), v.end()));
```

Complexidade:

```cpp
O(n)
```

---

# prev_permutation

Gera permutação anterior.

```cpp
prev_permutation(v.begin(), v.end());
```

Complexidade:

```cpp
O(n)
```

---

# unique

Remove duplicados consecutivos.

Necessita ordenar antes se quiser remover todos.

```cpp
sort(v.begin(), v.end());

v.erase(
    unique(v.begin(), v.end()),
    v.end()
);
```

Exemplo:

```cpp
1 1 2 2 2 5
```

↓

```cpp
1 2 5
```

Complexidade:

```cpp
O(n)
```

---

# rotate

Rotaciona elementos.

```cpp
rotate(
    v.begin(),
    v.begin() + k,
    v.end()
);
```

Exemplo:

```cpp
1 2 3 4 5
```

com

```cpp
k = 2
```

↓

```cpp
3 4 5 1 2
```

Complexidade:

```cpp
O(n)
```

---

# fill

Preenche intervalo.

```cpp
fill(v.begin(), v.end(), x);
```

Exemplo:

```cpp
fill(v.begin(), v.end(), 0);
```

Complexidade:

```cpp
O(n)
```

---

# swap

Troca dois valores.

```cpp
swap(a, b);
```

Complexidade:

```cpp
O(1)
```

---

# is_sorted

Verifica se está ordenado.

```cpp
is_sorted(v.begin(), v.end());
```

Retorna:

```cpp
true
```

ou

```cpp
false
```

Complexidade:

```cpp
O(n)
```

---

# nth_element

Coloca o k-ésimo elemento na posição correta.

```cpp
nth_element(
    v.begin(),
    v.begin() + k,
    v.end()
);
```

Após:

```cpp
v[k]
```

estará correto como se o vetor estivesse ordenado.

Complexidade média:

```cpp
O(n)
```

---

# all_of

Todos satisfazem condição.

```cpp
all_of(
    v.begin(),
    v.end(),
    [](int x){
        return x > 0;
    }
);
```

Complexidade:

```cpp
O(n)
```

---

# any_of

Algum satisfaz condição.

```cpp
any_of(...)
```

Complexidade:

```cpp
O(n)
```

---

# none_of

Nenhum satisfaz condição.

```cpp
none_of(...)
```

Complexidade:

```cpp
O(n)
```

---

# Uso frequente em CP

Top 10 funções mais usadas:

```cpp
sort
reverse
lower_bound
upper_bound
binary_search
max_element
min_element
count
find
unique
```

Essas funções aparecem praticamente toda semana em Codeforces, OBI e ICPC.
