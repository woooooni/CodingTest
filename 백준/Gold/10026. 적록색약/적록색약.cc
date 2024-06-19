#include <iostream>
#include <string>
#include <string.h>
#include <queue>

using namespace std;
char Map[101][101] = {};
bool Visited[101][101] = {};

int Dx[4] = {-1, 1, 0, 0};
int Dy[4] = {0, 0, -1, 1};
int N;
void Dfs(int x, int y)
{
    Visited[x][y] = true;
    for(int i = 0; i< 4; ++i)
    {
        int DirX = x + Dx[i];
        int DirY = y + Dy[i];
        
        if(0 > DirX || N <= DirX || 0 > DirY || N <= DirY)
            continue;
        
        if(false == Visited[DirX][DirY] && Map[x][y] == Map[DirX][DirY])
            Dfs(DirX, DirY);
    }
}

int main(void)
{
    cin >> N;
    string Input;
    
    for(int  i =0 ; i< N; ++i)
    {
        cin >> Input;
        for(int j = 0; j < Input.length(); ++j)   
        {
            Map[i][j] = Input[j];
        }
    }
    
    memset(Visited, false, sizeof(Visited));
    
    int Count = 0;
    for(int  i =0 ; i< N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(false == Visited[i][j])
            {
                Dfs(i, j);
                Count++;
            }
        }
    }
    cout << Count << "\n";
    
    for(int  i =0 ; i< N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(Map[i][j] == 'G')
            {
                Map[i][j] = 'R';
            }
        }
    }
    
    memset(Visited, false, sizeof(Visited));
    Count = 0;
    for(int  i =0 ; i< N; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            if(false == Visited[i][j])
            {
                Dfs(i, j);
                Count++;
            }
        }
    }
    cout << Count;
}

