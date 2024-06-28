#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N, M;
int Board[101];
bool Visited[101];

void Bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(1, 0));
    Visited[1] = true;
    
    while(!q.empty())
    {
        int Current = q.front().first;
        int Turn = q.front().second;
        q.pop();
        
        for(int i = 1; i <= 6; ++i)
        {
            int Next = Current + i;
            if(Next == 100)
            {
                cout << Turn + 1;
                return;
            }
            
            if(Next < 100)
            {
                while(0 != Board[Next])
                {
                    Next = Board[Next];
                }
                
                if(false == Visited[Next])
                {
                    q.push(make_pair(Next, Turn + 1)); 
                    Visited[Next] = true;
                }
            }
        }
    }
}

int main(void)
{
    cin >> N >> M;
    
    for(int i = 1; i <= N; ++i)
    {
        int From, To;
        cin >> From >> To;
        Board[From] = To;
    }
    
    for(int i = 1; i <= M; ++i)
    {
        int From, To;
        cin >> From >> To;
        Board[From] = To;
    }
    
    Bfs();
    
} 