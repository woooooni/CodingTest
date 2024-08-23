#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int T;

int Map[101][101];
bool Visited[101][101];

int DirX[4] = { 0, 0, -1, 1};
int DirY[4] = { -1, 1, 0, 0};

bool IsIn(int x, int y)
{
    return 0 <= x && 0 <= y && x < 100 && y < 100;
}

int Bfs(int StartX, int StartY)
{
    int Check = 1;
    queue<pair<int, int>> q;
    Visited[StartY][StartX] = true;
    q.push(make_pair(StartX, StartY));
           
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        for(int i =0 ; i  < 4; ++i)
        {
            int NextX = Current.first + DirX[i];
            int NextY = Current.second + DirY[i];
            
            if(IsIn(NextX, NextY))
            {
                if(Visited[NextY][NextX] == false && Map[NextY][NextX] == 1)
                {
                    Visited[NextY][NextX] = true;
                    q.push(make_pair(NextX, NextY));
                    Check++;
                }
            }
        }
    }
        
    return Check;
}

int main(void)
{
    cin >> T;
    while(T--)
    {
        int StartX, StartY;
        cin >> StartX >> StartY;
        StartY = 100 - StartY;
        
        for(int i = StartY; i > StartY - 10; --i)
        {
            for(int j = StartX; j < StartX + 10; ++j)
            {
                Map[i][j] = 1;
            }
        }
    }
    
    int Result = 0;
    for(int i =0; i <= 100; ++i)
    {
        for(int j = 0 ; j <= 100; ++j)
        {
            if(Visited[i][j] == false && Map[i][j] == 1)
            {
                Result += Bfs(j, i);
            }
        }
    }
    
    cout << Result;
    
    
}