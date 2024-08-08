
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int maxn = 1e5+10;
const int inf = 1e9+10;

// quantidade de vértices e arestas
int n, m;

// distância Atual de cada vértice
int dist[maxn];

// vetor que irá marcar os vértices visitados
bool mark[maxn];

// lista de adjacência que guarda um par (vértice, peso)
vector<pii> grafo[maxn];

void dijkstra(int S)
{
	// primeira etapa do algoritmo
	for (int i = 1; i <= n; i++)
		dist[i] = inf;

	dist[S] = 0;

	// fila de prioridade para guardar a distância atual de cada vértice em ordem crescente
	priority_queue<pii, vector<pii>, greater<pii>> fila;

	// inicialmente, inserimos apenas a origem
	fila.push({0, S});

	// quando todos os vértices forem marcados, a fila ficará vazia, e nesse momento o algoritmo para
	while (!fila.empty())
	{
		// segunda etapa do algoritmo
		int u = fila.top().second;
		fila.pop();

		// se U já foi marcado, apenas o ignoramos
		if (mark[u])
			continue;

		// marcamos U
		mark[u] = 1;

		for (auto V: grafo[u])
		{
			int v = V.first, w = V.second;

			// terceira etapa do algoritmo
			if (dist[v] > dist[u] + w)
			{
				// atualizamos a distância atual de V e a inserimos na fila
				dist[v] = dist[u] + w;
				fila.push({dist[v], v});
			}
		}
	}

	// No fim do algoritmo, o vetor 'dist' possuirá o menor caminho para
	// todos os vértices do grafo
}