#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N, M;

int Map[501][501];
bool Visited[501][501];

int DirX[4] = { 0, 0, -1, 1};
int DirY[4] = { -1, 1, 0, 0};

int Bfs(int StartX, int StartY)
{
    queue<pair<int, int>> q;
    q.push(make_pair(StartX, StartY));
    Visited[StartY][StartX] = true;
    
    int Result = 1;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        for(int i = 0; i < 4; ++i)
        {
            int NextX = Current.first + DirX[i];
            int NextY = Current.second + DirY[i];
            if(0 > NextX || 0 > NextY || NextX >= M || NextY >= N)
                continue;
            
            if(Visited[NextY][NextX] == false && Map[NextY][NextX] == 1)
            {
                Visited[NextY][NextX] = true;
                q.push(make_pair(NextX, NextY));
                Result++;
            }
        }
    }
    return Result;
}

int main(void)
{
    cin >> N >> M;
    
    int Cnt = 0;
    int Max = 0;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> Map[i][j];
        }
    }
    
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            if(Map[i][j] == 1 && Visited[i][j] == false)
            {
                Cnt++;
                Max = max(Bfs(j, i), Max);
            }
        }
    }
    
    cout << Cnt << "\n";
    cout << Max;
}