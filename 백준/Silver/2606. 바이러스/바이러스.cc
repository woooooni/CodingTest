#include <iostream>
#include <string>
#include <queue>
using namespace std;

int N, M;

vector<int> Computers[101];
bool Visited[101];

void Bfs()
{
    queue<int> q;
    q.push(1);
    Visited[1] = true;
    
    while(!q.empty())
    {
        int Index = q.front();
        q.pop();
        
        for(int i = 0; i < Computers[Index].size(); ++i)
        {
            int Next = Computers[Index][i];
            if(Visited[Next] == false)
            {
                Visited[Next] = true;
                q.push(Next);
            }
        }
    }
}

int main(void)
{
    cin >> N >> M;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        Computers[From].push_back(To);
        Computers[To].push_back(From);
    }
    
    Bfs();
    
    int Answer = 0;
    for(int i = 0;  i <= N; ++i)
    {
        if(Visited[i] == true)
        {
            Answer++;
        }
    }
    cout << Answer - 1;
}