#include <iostream>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

int Map[1001][1001] = {};
bool Visited[1001] = {};

int N, M;

queue<int> q;

void Dfs(int Start)
{
    Visited[Start] = true;
    cout << Start << " ";
    
    for(int i = 1; i <= N; ++i)
    {
        if(1 == Map[Start][i] && false == Visited[i])
        {
            Dfs(i);
        }
        
        if(i == N)
            return;
    }
}

void Bfs(int Start)
{
    q.push(Start);
    
    while(!q.empty())
    {
        int Index = q.front();
        Visited[Index] = true;
        cout << Index << " ";
        q.pop();
        
        for (int i = 1; i <= N; i++)
        {
            if (Map[Index][i] == 1 && Visited[i] == 0)
            {
                q.push(i);         //큐에 넣어줌
                Visited[i] = true; // i 점은 미리 방문기록 - 안하면 중복으로 방문할 수도 있다
            }
        }
        
    }
}

int main(void)
{
    int Start;
    cin >> N >> M >> Start;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        
        cin >> From >> To;
        Map[From][To] = 1;
        Map[To][From] = 1;
    }
    
    Dfs(Start);
    cout << "\n";
    
    memset(Visited, false, sizeof(Visited));
    
    Bfs(Start);
}