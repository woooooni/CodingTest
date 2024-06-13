#include <iostream>
#include <string>
#include <queue>


// 시작 정점이 여러 개인 BFS 문제.

using namespace std;

int M, N;
int Dx[4] = {0, 0, -1, 1};
int Dy[4] = {-1, 1, 0, 0};

struct Tomato
{
    int y, x;
};

int Box[1001][1001];
queue<Tomato> q;

bool Is_BoxIn(int Ny, int Nx)
{
    return (0 <= Ny && Ny < N && 0 <= Nx && Nx < M);
}

void Bfs(void)
{
    while(!q.empty())
    {
        int y = q.front().y;
        int x = q.front().x;
        
        q.pop();
        
        for(int i = 0; i<4; ++i)
        {
            int Ny = y + Dy[i];
            int Nx = x + Dx[i];
            if((true == Is_BoxIn(Ny, Nx)) && Box[Ny][Nx] == 0)
            {
                Box[Ny][Nx] = Box[y][x] + 1;
                q.push({Ny, Nx});
            }
        }
    }
}

int main(void)
{
    cin >> M >> N;
    
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> Box[i][j];
            if(Box[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }
    Bfs();
    
    
    int Max = 0;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            if(Box[i][j] == 0)
            {
                cout << -1 << "\n";
                return 0;
            }
            
            if(Max < Box[i][j])
                Max = Box[i][j];
        }
    }
    
    cout << Max - 1 << "\n";
    
    return 0;
    
}