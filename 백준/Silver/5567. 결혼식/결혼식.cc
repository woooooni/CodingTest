#include <iostream>
#include <vector>
#include <queue>

using namespace std;


vector<int> People[501];
bool Visited[501];

int N, M;

int Answer = 0;

void Bfs(int Start, int Depth)
{
    queue<pair<int, int>> q;
    q.push(make_pair(Start, Depth));
    Visited[Start] = true;
    
    while(!q.empty())
    {
        pair<int, int> Current = q.front();
        q.pop();
        if(2 > Current.second)
        {
            for(int i = 0; i < People[Current.first].size(); ++i)
            {
                int Next = People[Current.first][i];
                if(false == Visited[Next])
                {
                    Visited[Next] = true;
                    q.push(make_pair(Next, Current.second + 1));
                    Answer++;
                }
            }
        }
    }
        
}

int main(void)
{
    cin >> N >> M;
    
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        People[From].push_back(To);
        People[To].push_back(From);
    }
    
    Bfs(1, 0);
    
    cout << Answer;
    
    
    
}