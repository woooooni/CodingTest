#include <iostream>
#include <queue>
#include <string.h>
#include <algorithm>


using namespace std;

int N, M, V;
vector<int> Map[1001] = {};
bool Visited[1001] = {};

void Reset()
{
    memset(Visited, false , sizeof(Visited));
}

void Dfs(int Start)
{
    cout << Start << " ";
    Visited[Start] = true;
    
    sort(Map[Start].begin(), Map[Start].end());
    
    for(int i = 0; i < Map[Start].size(); ++i)
    {
        int Next = Map[Start][i];
        if(Visited[Next] == false)
        {
            Dfs(Next);
        }
    }
}

void Bfs()
{
    queue<int> q;
    q.push(V);
    Visited[V] = true;
    
    while(!q.empty())
    {
        int Index = q.front();
        cout << Index << " ";
        q.pop();
        
        sort(Map[Index].begin(), Map[Index].end());
        
        for(int i =0; i < Map[Index].size(); ++i)
        {
            if(Visited[Map[Index][i]] == false)
            {
                Visited[Map[Index][i]] = true;
                q.push(Map[Index][i]);
            }
        }
    }
}



int main(void)
{
    cin >> N >> M >> V;
    
    for(int i = 0; i <M; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        Map[From].push_back(To);
        Map[To].push_back(From);
    }
    
    Reset();
    Dfs(V);
    cout << "\n";
    Reset();
    Bfs();
    
}