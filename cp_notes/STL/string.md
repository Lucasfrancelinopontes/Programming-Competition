# string

Biblioteca:

```cpp
#include <string>
```

ou

```cpp
#include <bits/stdc++.h>
```

---

# Declaração

```cpp
string s;
```

Exemplos:

```cpp
string nome = "Lucas";
```

```cpp
string palavra;
cin >> palavra;
```

```cpp
string frase;
getline(cin, frase);
```

---

# Tamanho

```cpp
s.size();
```

ou

```cpp
s.length();
```

Exemplo:

```cpp
string s = "abcdef";

cout << s.size();
```

Saída:

```cpp
6
```

Complexidade:

```cpp
O(1)
```

---

# Verificar se está vazia

```cpp
s.empty();
```

Exemplo:

```cpp
if(s.empty())
{
    cout << "Vazia";
}
```

Complexidade:

```cpp
O(1)
```

---

# Acesso aos caracteres

```cpp
s[i]
```

Exemplo:

```cpp
string s = "abc";

cout << s[0];
```

Saída:

```cpp
a
```

Complexidade:

```cpp
O(1)
```

---

# Primeiro e último caractere

```cpp
s.front();
```

```cpp
s.back();
```

Exemplo:

```cpp
string s = "abcdef";

cout << s.front();
cout << s.back();
```

Saída:

```cpp
a
f
```

---

# Percorrer string

## Range Based For

```cpp
for(char c : s)
{
    cout << c << '\n';
}
```

---

## Índices

```cpp
for(int i = 0; i < s.size(); i++)
{
    cout << s[i] << '\n';
}
```

---

# Concatenar

```cpp
s += t;
```

ou

```cpp
s = s + t;
```

Exemplo:

```cpp
string a = "Hello";
string b = "World";

string c = a + b;
```

Resultado:

```cpp
HelloWorld
```

Complexidade:

```cpp
O(n)
```

---

# Adicionar caractere

```cpp
s.push_back(c);
```

Exemplo:

```cpp
s.push_back('a');
```

Complexidade:

```cpp
O(1)
```

---

# Remover último caractere

```cpp
s.pop_back();
```

Complexidade:

```cpp
O(1)
```

---

# Substring

```cpp
s.substr(pos, tamanho);
```

Exemplo:

```cpp
string s = "abcdef";

cout << s.substr(2,3);
```

Saída:

```cpp
cde
```

Complexidade:

```cpp
O(tamanho)
```

---

# Encontrar substring

```cpp
s.find(t);
```

Exemplo:

```cpp
string s = "abcdef";

cout << s.find("cd");
```

Saída:

```cpp
2
```

Se não existir:

```cpp
string::npos
```

Exemplo:

```cpp
if(s.find("xyz") == string::npos)
{
    cout << "Nao encontrou";
}
```

Complexidade:

```cpp
O(n*m)
```

---

# Encontrar caractere

```cpp
s.find('a');
```

Exemplo:

```cpp
string s = "banana";

cout << s.find('n');
```

Saída:

```cpp
2
```

---

# Última ocorrência

```cpp
s.rfind(x);
```

Exemplo:

```cpp
string s = "banana";

cout << s.rfind('a');
```

Saída:

```cpp
5
```

---

# Inserir substring

```cpp
s.insert(pos, texto);
```

Exemplo:

```cpp
string s = "abcd";

s.insert(2, "XYZ");
```

Resultado:

```cpp
abXYZcd
```

---

# Apagar trecho

```cpp
s.erase(pos, tamanho);
```

Exemplo:

```cpp
string s = "abcdef";

s.erase(2,3);
```

Resultado:

```cpp
abf
```

---

# Substituir trecho

```cpp
s.replace(pos, tamanho, texto);
```

Exemplo:

```cpp
string s = "abcdef";

s.replace(2,2,"XYZ");
```

Resultado:

```cpp
abXYZef
```

---

# Reverter string

```cpp
reverse(s.begin(), s.end());
```

Exemplo:

```cpp
abcde
```

↓

```cpp
edcba
```

Complexidade:

```cpp
O(n)
```

---

# Ordenar caracteres

```cpp
sort(s.begin(), s.end());
```

Exemplo:

```cpp
cabda
```

↓

```cpp
aabcd
```

Complexidade:

```cpp
O(n log n)
```

---

# Converter para maiúsculo

```cpp
toupper(c);
```

Exemplo:

```cpp
for(char &c : s)
{
    c = toupper(c);
}
```

---

# Converter para minúsculo

```cpp
tolower(c);
```

Exemplo:

```cpp
for(char &c : s)
{
    c = tolower(c);
}
```

---

# Converter string para número

## int

```cpp
stoi(s);
```

Exemplo:

```cpp
int x = stoi("123");
```

Resultado:

```cpp
123
```

---

## long long

```cpp
stoll(s);
```

Exemplo:

```cpp
long long x = stoll("123456789");
```

---

## double

```cpp
stod(s);
```

---

# Converter número para string

```cpp
to_string(x);
```

Exemplo:

```cpp
string s = to_string(123);
```

Resultado:

```cpp
"123"
```

---

# Comparação

```cpp
if(a == b)
```

```cpp
if(a < b)
```

As strings possuem comparação lexicográfica.

Exemplo:

```cpp
"abc" < "abd"
```

Resultado:

```cpp
true
```

---

# Contar caractere

```cpp
count(
    s.begin(),
    s.end(),
    'a'
);
```

Exemplo:

```cpp
string s = "banana";

cout << count(
    s.begin(),
    s.end(),
    'a'
);
```

Saída:

```cpp
3
```

Complexidade:

```cpp
O(n)
```

---

# Remover duplicatas consecutivas

```cpp
s.erase(
    unique(
        s.begin(),
        s.end()
    ),
    s.end()
);
```

Exemplo:

```cpp
aaabbbcc
```

↓

```cpp
abc
```

---

# String para vetor de palavras

```cpp
stringstream ss(s);
```

Exemplo:

```cpp
string s = "eu gosto de cp";

stringstream ss(s);

string palavra;

while(ss >> palavra)
{
    cout << palavra << '\n';
}
```

---

# Uso comum em CP

## Verificar palíndromo

```cpp
string t = s;

reverse(t.begin(), t.end());

if(s == t)
```

---

## Anagrama

```cpp
sort(a.begin(), a.end());
sort(b.begin(), b.end());

if(a == b)
```

---

## Frequência de caracteres

```cpp
map<char,int> freq;

for(char c : s)
{
    freq[c]++;
}
```

---

## Remover espaços

```cpp
s.erase(
    remove(
        s.begin(),
        s.end(),
        ' '
    ),
    s.end()
);
```

---

# Complexidades

| Operação    | Complexidade |
| ----------- | ------------ |
| size        | O(1)         |
| acesso s[i] | O(1)         |
| push_back   | O(1)         |
| pop_back    | O(1)         |
| find        | O(n*m)       |
| substr      | O(k)         |
| reverse     | O(n)         |
| sort        | O(n log n)   |
| count       | O(n)         |

---

# Dicas

* `string` funciona quase como um `vector<char>`.
* `getline()` lê linhas completas.
* `find()` retorna `string::npos` quando não encontra.
* `stoi`, `stoll` e `to_string` aparecem frequentemente.
* Em problemas de strings, os mais usados são:

```cpp
size()
substr()
find()
reverse()
sort()
count()
getline()
```

* Para problemas avançados de CP, estude depois:

```cpp
KMP
Z Function
Rolling Hash
Trie
Suffix Array
```

pois eles não fazem parte da STL, mas aparecem bastante em competições.
