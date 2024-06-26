#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <queue>


using namespace std;
int Map[50][50] = {};
bool Visited[50][50] = {};
vector<int> Results;

int Dx[8] = {0, 0, -1, 1, -1, 1, -1, 1 };
int Dy[8] = {-1, 1, 0, 0, 1, -1, -1, 1 };

int Result = 0;

int Width, Height;
void Reset()
{
    memset(Visited, false, sizeof(Visited));
    memset(Map, 0, sizeof(Map));
    Result = 0;
}

void Bfs(int StartY, int StartX)
{
    queue<pair<int, int>> q;
    q.push(make_pair(StartX, StartY));
    
    Visited[StartY][StartX] = true;
    
    while(false == q.empty())
    {
        pair<int, int> Next = q.front();
        q.pop();
        
        for(int i = 0 ; i < 8; ++i)
        {
            int NextX = Next.first + Dx[i];
            int NextY = Next.second + Dy[i];
            
            if(0 > NextY || 0 > NextX || NextY >= Height || NextX >= Width)
                continue;
            
            if(false == Visited[NextY][NextX] && 1 == Map[NextY][NextX])
            {
                Visited[NextY][NextX] = true;
                q.push(make_pair(NextX, NextY));
            }
        }
    }
}

int main(void)
{
    while(true)
    {
        cin >> Width >> Height;

        if(0 == Width && 0 == Height)
        {
            break;
        }
        
        for(int i = 0; i < Height; ++i)
        {
            for(int j = 0; j < Width; ++j)
            {
                cin >> Map[i][j];
            }
        }
        
        
        for(int i = 0; i < Height; ++i)
        {
            for(int j = 0; j < Width; ++j)
            {
                if(Map[i][j] == 1 && Visited[i][j] == false)
                {
                    Bfs(i, j);
                    Result++;
                }
            }
        }
        cout << Result << "\n";
        Reset();
    }
}