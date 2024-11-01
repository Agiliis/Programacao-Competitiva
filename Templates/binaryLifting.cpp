/* 
Preprocessamento para busca em grafos onde cada vértice tem apenas 1 antecessor
e pedem-se q queries do k-ésimo antecessor acima do vertice i

Ideia principal: prox[i][x] = prox[i-1][prox[i-1][x]]
(O próximo vértice à 2^i passos de x 
é igual ao próximo vertice à 2^(i-1) passos do próximo vértice à 2^(i-1) passos de x)

Complexidade: O(log2(k)*n)
*/

#include <bits/stdc++.h>

using namespace std;

const int MAXN;
const int MAXLOG;

int prox[MAXLOG + 1][MAXN];

int main() {
  int n, q;
  cin >> n >> q; // só usaremos o valor q no futuro
  for (int x = 1; x <= n; x++) {
    cin >> prox[0][x];
  }
  for (int i = 1; i <= MAXLOG; i++) {
    for (int x = 1; x <= n; x++) {
      prox[i][x] = prox[i-1][prox[i-1][x]];
    }
  }
}