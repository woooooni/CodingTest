#include <iostream>
#include <string>
#include <string.h>

#include <vector>
#include <queue>

using namespace std;

int M, N;

vector<int> Users[101];
bool Visited[101] = {};

int Count = 0;
int Result = 9999999;
int Answer = 0;

void Bfs(int From, int To)
{
    queue<pair<int, int>> q;
    q.push(make_pair(From, 0));
    Visited[From] = true;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        if(To == Current.first)
        {
            Count = Current.second;
            return;
        }
        
        for(int i = 0; i < Users[Current.first].size(); ++i)
        {
            int Next = Users[Current.first][i];
            if(false == Visited[Next])
            {
                q.push(make_pair(Next, Current.second + 1));
                Visited[Next] = true;
            }
        }
    }
}

void Reset()
{
    memset(Visited, false, 101);
}

    
int main(void)
{
    cin >> N >> M;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        Users[From].push_back(To);
        Users[To].push_back(From);
    }
    
    for(int i = 1; i <= N; ++i)
    {
        int Temp = 0;
        for(int j = 1; j <= N; ++j)
        {
            Reset();
            if(i == j)
                continue;
            
            Bfs(i, j);
            Temp += Count;
            Count = 0;
        }
        
        
        if(Temp < Result)
        {
            Result = Temp;
            Answer = i;
        }
    }
    
    cout << Answer;
}