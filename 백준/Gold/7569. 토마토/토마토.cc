#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int Dx[6] = {1,0,-1,0,0,0};  // 같은 층의 상하좌우 + 윗층 아래층
int Dy[6] = {0,1,0,-1,0,0};
int Dh[6] = {0,0,0,0,1,-1};

int Map[101][101][101];
int Dist[101][101][101];

int N, M, H;

typedef struct tagCoords
{
public:
    tagCoords(int InHeight, int InX, int InY) : x(InX), y(InY), height(InHeight) {};
    tagCoords(const tagCoords& rhs) : x(rhs.x), y(rhs.y), height(rhs.height) {};
    
public:
    int x; 
    int y; 
    int height;
    
} Coords;

queue<Coords> q;
void Bfs()
{   
    while(!q.empty())
    {
        Coords Current = q.front();
        q.pop();
        
        for(int i = 0; i < 6; ++i)
        {
            int NextH = Current.height + Dh[i];
            int NextX = Current.x + Dx[i];
            int NextY = Current.y + Dy[i];
            
            if(0 > NextH || 0 > NextX || 0 > NextY || H <= NextH || N <= NextX || M <= NextY)
                continue;
            
            if(Dist[NextX][NextY][NextH] == -1)
            {
                q.push(Coords(NextH, NextX, NextY));
                Dist[NextX][NextY][NextH] = Dist[Current.x][Current.y][Current.height] + 1;
            }
        }
    }

}

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    cin >> M >> N >> H;
    
    bool Completed = true;
    for(int k = 0; k < H; ++k)
    {
        for(int i = 0 ; i < N; ++i)
        {
            for(int j = 0; j < M; ++j)
            {
                cin >> Map[i][j][k];
                if(0 == Map[i][j][k])
                {
                    Completed = false;
                    Dist[i][j][k] = -1;
                }
                
                if(1 == Map[i][j][k])
                {
                    q.push(Coords(k, i, j));
                }
            }
        }    
    }
    
    if(true == Completed)
    {
        cout << 0;
        return 0;
    }
    
    Bfs();
    
    
    int Result = 0;
    for(int k = 0; k < H; ++k)
    {
        for(int i = 0 ; i < N; ++i)
        {
            for(int j = 0; j < M; ++j)
            {
                if(-1 == Dist[i][j][k])
                {
                    cout << -1;
                    return 0;
                }
                Result = max(Result, Dist[i][j][k]);
            }
        }    
    }
    
    cout << Result;
    
    
    
        
    
    
}