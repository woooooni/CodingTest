#include <iostream>
#include <string>
#include <queue>

using namespace std;
int N,M;

int Map[1001][1001];
bool Visited[1001][1001];

int DirX[4] = {0, 0, -1, 1};
int DirY[4] = {-1, 1, 0, 0};

bool IsIn(int X, int Y)
{
    return 0 <= X && 0 <= Y && X < M && Y < N;
}
int Bfs()
{
    int Result = 0;
    queue<pair<pair<int, int>, int>> q;
    for(int i = 0; i  < N; ++i)
    {
        for(int j =0; j < M; ++j)
        {
            if(Map[i][j] == 1)
            {
                q.push(make_pair(make_pair(j, i), 0));
                Visited[i][j] = true;
            }
        }
    }
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front().first;
        int Day = q.front().second;
        q.pop();
        
        Result = max(Result, Day);
        for(int i =0 ; i < 4; ++i)
        {
            int NextX = Current.first + DirX[i];
            int NextY = Current.second + DirY[i];
            
            if(IsIn(NextX, NextY))
            {
                if(Map[NextY][NextX] == 0 && Visited[NextY][NextX] == false)
                {
                    Visited[NextY][NextX] = true;
                    Map[NextY][NextX] = 1;
                    q.push(make_pair(make_pair(NextX, NextY), Day + 1));
                }
            }
        }
    }
    
    return Result;
}

bool Check()
{
    for(int i = 0; i  < N; ++i)
    {
        for(int j =0; j < M; ++j)
        {
            if(Map[i][j] == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main(void)
{
    
    cin >> M >> N;
    
    bool bAlready = true;
    int Day = 0;
    
    for(int i = 0; i  < N; ++i)
    {
        for(int j =0; j < M; ++j)
        {
            cin >> Map[i][j];
            if(Map[i][j] == 0)
            {
                bAlready = false;
            }
        }
    }
    
    if(bAlready)
    {
        cout << 0;
        return 0;
    }
    
    int Answer = Bfs();
    
    if(Check())
    {
        cout << Answer;
    }
    else
    {
        cout << -1;
    }
    
    
}