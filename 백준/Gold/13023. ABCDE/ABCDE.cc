#include <iostream>
#include <vector>
using namespace std;

int N, M;

bool Answer = false;
void Dfs(int Depth,int Current, vector<vector<int>>& V,vector<bool>& Visited) 
{
	if (Depth == 4) 
    {
        Answer = true;
		return;
	}
    
	for (int j = 0; j < V[Current].size(); j++) 
    {
		int Next = V[Current][j];
        
		if (Visited[Next] == true) 
            continue;
        
		Visited[Next] = true;
		Dfs(Depth + 1, Next, V, Visited);
		Visited[Next] = false;
	}
}

int main() 
{
	cin >> N >> M;

	vector<vector<int>> V(N);

	for (int i = 0; i < M; i++) {
		int From, To;
		cin >> From >> To;
		V[From].push_back(To);
		V[To].push_back(From);
	}
    
	for (int i = 0; i < N; i++) {
		vector<bool> Visited(N);
		Visited[i] = true;
        Dfs(0, i, V, Visited);
        
		if(Answer == true)
        {
            cout << 1;
            return 0;
        }
	}
    
	cout << 0;

	return 0;
}