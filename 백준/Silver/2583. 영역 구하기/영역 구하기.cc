#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int M, N, K;
bool Visited[101][101] = {};

int Dx[4] = { 0, 0, -1, 1 };
int Dy[4] = { -1, 1, 0, 0 };

vector<int> AreaSize;
void Bfs(int InX, int InY)
{
    queue<pair<int, int>> q;
    Visited[InX][InY] = true;
    q.push(make_pair(InX, InY));
    
    int Count = 1;
    while(!q.empty())
    {
        pair<int, int> Coord = q.front();
        q.pop();
        for(int i = 0; i < 4; ++i)
        {
            int DirX = Dx[i] + Coord.first;
            int DirY = Dy[i] + Coord.second;
            
            if(0 > DirX || DirX >= M || 0 > DirY || DirY >= N)
                continue;
            
            if(false == Visited[DirX][DirY])
            {
                q.push(make_pair(DirX, DirY));
                Count++;
                Visited[DirX][DirY] = true;
            }
        }
    }
    
    AreaSize.push_back(Count);
    
}

int main(void)
{
    cin >> M >> N >> K;
    
    for(int i = 0; i < K; ++i)
    {
        int StartX, StartY, EndX, EndY;
        cin >> StartX >> StartY >> EndX >> EndY;
        
        for(int j = StartX; j < EndX; ++j)
        {
            for(int l = StartY; l < EndY; ++l)
            {
                Visited[l][j] = true;
            }
        }
    }
    
    int Result = 0;
    for(int i = 0; i< M; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(false == Visited[i][j])
            {
                Bfs(i, j);
                Result++;
            }
        }
    }
    
    sort(AreaSize.begin(), AreaSize.end());
    
    cout << Result << endl;
    for(int i = 0; i< AreaSize.size(); ++i)
    {
        cout << AreaSize[i] << " ";
    }
    
    
    
    
}