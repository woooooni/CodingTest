#include<string>
#include<string.h>
#include<iostream>

using namespace std;

int N;
int Map[101][101] = {};
bool Visited[101][101] = {};



int Dx[4] = { 0, 0, -1, 1 };
int Dy[4] = { -1, 1, 0, 0 };

int Height = 0;
int Result = 0;

void Dfs(int x, int y)
{
    Visited[x][y] = true;
    
    for(int i = 0; i < 4; ++i)
    {
        int DirX = x + Dx[i];
        int DirY = y + Dy[i];
        
        if(0 > DirX || N <= DirX || 0 > DirY || N <= DirY)
            continue;
        
        if(false == Visited[DirX][DirY])
        {
            if(Height < Map[DirX][DirY])
            {
                Dfs(DirX, DirY);
            }
            else
            {
               Visited[DirX][DirY] = true;
            }
        }
    }
}


int main(void)
{
    cin >> N;
    
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            cin >> Map[i][j];
            Height = max(Height , Map[i][j]);
        }
    }
    
    while(0 <= Height)
    {
        int Count = 0;
        for(int i = 0; i < N; ++i)
        {
            for(int j = 0; j < N; ++j)
            {
                if((Map[i][j] > Height) && false == Visited[i][j])
                {
                    Dfs(i, j);
                    ++Count;
                }
            }
        }
        memset(Visited, false, sizeof(Visited));
        Height--;
        Result = max(Result, Count);
    }
    
    
    cout << Result;
    
    
}