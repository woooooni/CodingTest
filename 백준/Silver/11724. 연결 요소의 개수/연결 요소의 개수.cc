#include <iostream>
#include <string>
#include <vector>
using namespace std;
int N, M;
vector<int> Map[1001];
int Visited[1001];

void Dfs(int Start)
{
    Visited[Start] = true;
    for(int i = 0; i<Map[Start].size(); ++i)
    {
        int Index = Map[Start][i];
        if(Visited[Index] == false)
        {
            Dfs(Index);
        }
    }
}
int main(void)
{
    cin >> N >> M;
    
    int U, V;
    for(int i = 0; i < M; ++i)
    {
        cin >> U >> V;
        
        Map[U].push_back(V);
        Map[V].push_back(U);
    }
    
    int Count = 0;
    for(int i = 1; i <= N; ++i)
    {
        if(Visited[i] == false)
        {
            Count++;
            Dfs(i);
        }
    }
    
    cout << Count;
    
    return 0;
}