#include <iostream>
#include <vector>
#include <queue>
#include <string.h>

using namespace std;

int N, M;

int Map[1001][1001] = {};
int Visited[1001][1001] = {};
int Dx[4] = {0, 0, -1, 1};
int Dy[4] = {-1, 1, 0, 0};


void Reset()
{
    memset(Visited, 0, sizeof(Visited));
}

int Bfs(pair<int, int> Start)
{
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(make_pair(Start.first, Start.second), 1));
    Visited[Start.first][Start.second] = 1;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front().first;
        int Count = q.front().second;
        q.pop();
        
        for(int i =0; i < 4; ++i)
        {
            int NextX = Current.first + Dx[i];
            int NextY = Current.second + Dy[i];
            
            if(0 > NextX || 0 > NextY || N <= NextX || M <= NextY)
                continue;
            
            if(Map[NextX][NextY] == 1 && Visited[NextX][NextY] == 0)
            {
                Visited[NextX][NextY] = Count + 1;
                q.push(make_pair(make_pair(NextX, NextY), Count + 1));
            }
        }
    }
    
    return 0;
}

int main(void)
{
    
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);
    
    cin >> N >> M;
    
    pair<int, int> Start;
    for(int  i = 0; i < N; ++i)
    {
        for(int  j = 0; j < M; ++j)
        {
            cin >> Map[i][j];
            if(Map[i][j] == 2)
            {
                Start = make_pair(i, j);
            }
        }
    }
    
    Bfs(Start);
    
    for(int i = 0; i < N; ++i)
    {
        for(int  j = 0; j < M; ++j)
        {
            if(0 == Map[i][j])
            {
                cout << 0 << " ";
            }
            else
            {
                cout << Visited[i][j] - 1 << " ";    
            }
            
        }
        cout << "\n";
    }
    
    
    
}