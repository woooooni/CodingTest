#include <iostream>
#include <string>
#include <string.h>
#include <queue>
#include <vector>


using namespace std;

int N, M;
int Map[501][501];
bool Visited[501][501];

int PictureCount = 0;

int Area = 0;
int MaxPictureArea = 0;

int Dx[4] = { -1, 1, 0, 0 };
int Dy[4] = { 0, 0, -1, 1 };

void Reset()
{
    memset(Visited, false, sizeof(N * N));
    Area = 0;
}

void Bfs(int StartY, int StartX)
{
    queue<pair<int, int>> q;
    q.push(make_pair(StartY, StartX));
    
    Visited[StartY][StartX] = true;
    Area = 1;
    
    while(!q.empty())
    {
        pair<int, int> Pair = q.front();
        q.pop();
        
        for(int i = 0; i < 4; ++i)
        {
            int NextY = Pair.first + Dy[i];
            int NextX = Pair.second + Dx[i];
            
            
            if(0 > NextX || 0 > NextY || N <= NextY || M <= NextX)
                continue;
            
            if(Visited[NextY][NextX] == false && Map[NextY][NextX] == 1)
            {
                Visited[NextY][NextX] = true;
                q.push(make_pair(NextY, NextX));
                Area++;
            }
        }
    }
    
}

int main(void)
{
    cin >> N >> M;
    
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
            if(Map[i][j] == 1 && false == Visited[i][j])
            {
                Reset();
                PictureCount++;
                Bfs(i, j);
                MaxPictureArea = max(Area, MaxPictureArea);
            }
        }
    }
    
    cout << PictureCount << "\n";
    MaxPictureArea = (PictureCount == 0) ? 0 : MaxPictureArea;
    cout << MaxPictureArea;
}
