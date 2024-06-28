#include <iostream>
#include <queue>
#include <vector>


using namespace std;

string Map[601][601];
bool Visited[601][601];

int Dx[4] = {0, 0, -1, 1};
int Dy[4] = {-1, 1, 0, 0};


int N, M;

int Result = 0;
void Bfs(int StartX, int StartY)
{
    queue<pair<int, int>> q;
    q.push(make_pair(StartX, StartY));
    Visited[StartX][StartY] = true;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        
        if("P" == Map[Current.first][Current.second])
        {
            Result++;
        }
        
        for(int i = 0 ; i < 4; ++i)
        {
            int NextX = Current.first + Dx[i];
            int NextY = Current.second + Dy[i];
            
            if(0 > NextX || 0 > NextY || NextX >= N || NextY >= M)
                continue;
            
            if(false == Visited[NextX][NextY] && Map[NextX][NextY] != "X")
            {
                Visited[NextX][NextY] = true;
                q.push(make_pair(NextX, NextY));
            }
        }
    }
    
    
}
int main(void)
{
    cin >> N >> M;
    
    int StartX, StartY;
    for(int i = 0; i < N; ++i)
    {
        string Input;
        cin >> Input;
        for(int j = 0; j < Input.length(); ++j)
        {
            Map[i][j] = Input[j];
            if(Input[j] == 'I')
            {
                StartX = i;
                StartY = j;
            }
        }
    }
    
    Bfs(StartX, StartY);
    if(0 == Result)
        cout << "TT";
    else
        cout << Result;
    
}