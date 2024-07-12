#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int N, M;
int Map[101][101];
bool Visited[101][101];

int Dx[4] = {0, 0, -1, 1};
int Dy[4] = {-1, 1, 0, 0};

int LastCount = 0;
int Result = 0;

void Reset()
{
    memset(Visited, false, 101 * 101);
}

bool Bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    Visited[0][0] = true;
    
    int Count = 0;
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        for(int i =0 ; i < 4; ++i)
        {
            int NextX = Current.first + Dx[i];
            int NextY = Current.second + Dy[i];
            
            if(0 > NextX || 0 > NextY || N <= NextX || M <= NextY)
                continue;
            
            if(true == Visited[NextX][NextY])
                continue;
            
            if(Map[NextX][NextY] == 1)
            {
                Map[NextX][NextY] = 0;
                ++Count;
            }
            else
            {
                q.push(make_pair(NextX, NextY));
            }
            
            Visited[NextX][NextY] = true;
        }
    }
    
    if(0 != Count)
    {
        LastCount = Count;
        return false;
    }
    else
    {
        return true;
    }   
}


int main(void)
{
    cin >> N >> M;
    
    for(int i =0 ; i < N; ++i)
    {
        for(int j =0; j < M; ++j)
        {
            cin >> Map[i][j];
        }
    }
    
    while(false == Bfs())
    {
        Reset();
        ++Result;
    }
    
    cout << Result<< "\n";
    cout << LastCount << "\n";
    
    
}