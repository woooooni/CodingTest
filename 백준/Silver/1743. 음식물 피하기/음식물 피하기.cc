#include <iostream>
#include <string>
#include <queue>
#include <string.h>

using namespace std;

bool Map[101][101];
bool Visited[101][101];

int Dx[4] = { 0, 0, -1, 1 };
int Dy[4] = { -1, 1, 0, 0 };

int N, M;

int Count = 0;

void Bfs(int StartX, int StartY)
{
    queue<pair<int, int>> q;
    
    q.push(make_pair(StartX, StartY));
    Visited[StartX][StartY] = true;
    Count = 1;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        for(int i = 0 ; i < 4; ++i)
        {
            int NextX = Current.first + Dx[i];
            int NextY = Current.second + Dy[i];
            
            if(0 >= NextX && 0 >= NextY && N < NextX && M < NextY)
                continue;
            
            if(false == Visited[NextX][NextY] && Map[NextX][NextY] == 1)
            {
                Visited[NextX][NextY] = true;
                q.push(make_pair(NextX, NextY));
                Count++;
            }
        }
    }
}

void Reset()
{
    memset(Visited, false, 101 * 101);
    Count = 0;
}

int main(void)
{
    int K;
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);
    
    cin >> N >> M >> K;
    
    for(int i = 0 ; i < K; ++i)
    {
        int StartX, StartY;
        cin >> StartX >> StartY;
        Map[StartX][StartY] = 1;
    }
    
    int Result = 1;
    for(int i = 1; i <= N; ++i)
    {
        for(int j = 1; j <= M; ++j)
        {
            if(false == Visited[i][j] && Map[i][j] == 1)
            {
                Reset();
                Bfs(i, j);
                Result = max(Result, Count);
            }
        }
    }
    
    cout << Result;
}