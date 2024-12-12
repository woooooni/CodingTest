#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

#define INTMAX 100000000
#define MAX_N 801

vector<pair<int, int>> Graph[MAX_N];
int Dist[MAX_N];

void Dijkstra(int StartNode)
{
	fill(Dist, Dist + MAX_N, INTMAX);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	pq.push({ 0, StartNode });
	Dist[StartNode] = 0;

	while (!pq.empty())
	{
		int CurCost = pq.top().first;
		int CurNode = pq.top().second;
		pq.pop();

		if (Dist[CurNode] < CurCost)
			continue;

		int Size = static_cast<int>(Graph[CurNode].size());
		for (int i = 0; i < Size; ++i)
		{
			int NextNode = Graph[CurNode][i].first;
			int NextCost = Graph[CurNode][i].second + CurCost;

			if (Dist[NextNode] > NextCost)
			{
				pq.push({ NextCost, NextNode });
				Dist[NextNode] = NextCost;
			}
		}
	}
}

int main()
{
	int N, E;

	cin >> N >> E;

	for (int i = 0; i < E; ++i)
	{
		int NodeA, NodeB, Cost;
		cin >> NodeA >> NodeB >> Cost;
		Graph[NodeA].push_back({ NodeB, Cost });
		Graph[NodeB].push_back({ NodeA, Cost });
	}

	int MustNodeA, MustNodeB;
	cin >> MustNodeA >> MustNodeB;

	Dijkstra(1);
	int StartToA = Dist[MustNodeA];
	int StartToB = Dist[MustNodeB];

	Dijkstra(MustNodeA);
	int AToB = Dist[MustNodeB];
	int AToN = Dist[N];

	Dijkstra(MustNodeB);
	int BToN = Dist[N];

	int result = min(
		{ StartToA + AToB + BToN,
		StartToB + AToB + AToN,
		INTMAX
		});

	if (result >= INTMAX)
		cout << -1;
	else
		cout << result;

	return 0;
}