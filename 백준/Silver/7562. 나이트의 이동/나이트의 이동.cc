#include <iostream>
#include <string>
#include <string.h>
#include <queue>

using namespace std;

int Map[300][300] = {};
bool Visited[300][300] = {};

int Dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
int Dy[8] = { 2,1,-1,-2,-2,-1,1,2 };

pair<int, int> Start;
pair<int, int> End;

int T;
int N;

void Reset()
{
    memset(Map, false, sizeof(Map));
    memset(Visited, false, sizeof(Visited));
}

void Bfs()
{
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(Start, 0));
    Visited[Start.first][Start.second] = true;
    
    while(false == q.empty())
    {
        pair<int, int> Current = q.front().first;
        int Count = q.front().second;
        q.pop();
        
        if(Current.first == End.first && Current.second == End.second)
        {
            cout << Count << "\n";
            return;
        }
        
        for(int i = 0; i < 8; ++i)
        {
            int NextX = Current.first + Dx[i];
            int NextY = Current.second + Dy[i];
            
            if(0 > NextX || 0 > NextY || N <= NextX || N <= NextY)
                continue;
            
            if(false == Visited[NextX][NextY])
            {
                Visited[NextX][NextY] = true;
                q.push(make_pair(make_pair(NextX, NextY), Count + 1));
            }
        }
    }

}

int main(void)
{
    cin >> T;
    
    while(T--)
    {
        Reset();
        
        cin >> N;
        cin >> Start.first;
        cin >> Start.second;
        cin >> End.first;
        cin >> End.second;
        
        Bfs();
        
    }
    
}