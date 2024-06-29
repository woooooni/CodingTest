#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <queue>

#define INF 987654321

using namespace std;

int N;

int Dx[4] = { 0, 0, -1, 1 };
int Dy[4] = { -1, 1, 0, 0 };

int Map[125][125];
int Costs[125][125];

int Cnt = 1;

void Reset()
{
    memset(Map, 0, sizeof(Map));
}

void Bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    Costs[0][0] = Map[0][0];
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        for(int i = 0; i < 4; ++i)
        {
            int NextX = Current.first + Dx[i];
            int NextY = Current.second + Dy[i];
            
            if(0 > NextX || 0 > NextY || N <= NextX || N <= NextY)
                continue;
            
            if(Costs[Current.first][Current.second] + Map[NextX][NextY] >= Costs[NextX][NextY])
                continue;
            
            Costs[NextX][NextY] = Costs[Current.first][Current.second] + Map[NextX][NextY];
            q.push(make_pair(NextX, NextY));
        }
        
    }
    
    cout << "Problem " << Cnt++ << ": " << Costs[N - 1][N - 1] << "\n";
}

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    
    ios_base::sync_with_stdio(NULL);
    
    while(true)
    {
        cin >> N;
        if(N == 0)
            return 0;
        
        Reset();
        
        for(int i = 0; i < N; ++i)
        {
            for(int j = 0; j < N; ++j)
            {
                cin >> Map[i][j];
                Costs[i][j] = INF;
            }
        }
        
        Bfs();
    }
}


