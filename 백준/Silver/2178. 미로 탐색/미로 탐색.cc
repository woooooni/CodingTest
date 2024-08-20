#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N, M;
int Map[101][101];
bool Visited[101][101];

int DirX[4] = { 0, 0, -1, 1};
int DirY[4] = {-1, 1, 0, 0};
bool IsIn(int x, int y)
{
    return 0 <= x && 0 <= y && x < M && y < N;
}

void Bfs()
{
    queue<pair<pair<int, int>, int>> q;
    q.push(make_pair(make_pair(0, 0), 1));
    Visited[0][0] = true;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front().first;
        int Dist = q.front().second;
        q.pop();
        
        if(Current.first == M - 1 && Current.second == N - 1)
        {
            cout << Dist;
            return;
        }
        
        for(int i =0 ; i < 4; ++i)
        {
            int NextX = DirX[i] + Current.first;
            int NextY = DirY[i] + Current.second;
            
            if(IsIn(NextX, NextY))
            {
                if(Map[NextY][NextX] == 1 && Visited[NextY][NextX] == false)
                {
                    Visited[NextY][NextX] = true;
                    q.push(make_pair(make_pair(NextX, NextY), Dist + 1));
                }
            }
        }
    }
    
}

int main(void)
{
    cin >> N >> M;
    
    for(int i =0 ; i < N; ++i)
    {
        string Input;
        cin >> Input;
        for(int j = 0; j < Input.length(); ++j)
        {
            Map[i][j] = int(Input[j] - '0');
        }
    }
    
    Bfs();
    
    
}