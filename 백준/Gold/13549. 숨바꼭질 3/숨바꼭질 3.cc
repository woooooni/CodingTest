#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, K;
bool Visited[100001];

void Bfs(int N)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push(make_pair(0, N));
    Visited[N] = true;
    
    while(!q.empty())
    {
        int Current = q.top().second;
        int Depth = q.top().first;
        q.pop();
        
        if(Current == K)
        {
            cout << Depth;
            return;
        }
        
        int Next = Current * 2;
        if(0 <= Next && Next < 100001)
        {
            if(Visited[Next] == false)
            {
                q.push(make_pair(Depth, Next));
                Visited[Next] = true;
            }  
        }
        
        
        Next = Current - 1;
        if(0 <= Next && Next < 100001)
        {
            if(Visited[Next] == false)
            {
                q.push(make_pair(Depth + 1, Next));
                Visited[Next] = true;   
            }
        }
        
        
        Next = Current + 1;
        if(0 <= Next && Next < 100001)
        {
            if(Visited[Next] == false)
            {
                q.push(make_pair(Depth + 1, Next));
                Visited[Next] = true;   
            }
        }
    }
    
    
}
int main(void)
{
    cin >> N >> K;
    
    Bfs(N);
    
}
