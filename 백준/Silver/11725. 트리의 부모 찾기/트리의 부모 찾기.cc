#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <queue>
using namespace std;

vector<int> Map[100001];
bool Visited[100001];
int Answer[100001] = {};

void Bfs(int Number)
{
    queue<int> q;
    q.push(Number);
    Visited[Number] = true;
    
    while(!q.empty())
    {
        int Parent = q.front();
        q.pop();
        for(int i = 0; i < Map[Parent].size(); ++i)
        {
            int Child = Map[Parent][i];
            if(!Visited[Child]){
                Answer[Child] = Parent;
                Visited[Child] = true;
                q.push(Child);
            }
        }
    }
    
}

int main(void)
{
    int N;
    cin >> N; 
    
    for(int i = 0; i < N-1; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        Map[From].push_back(To);
        Map[To].push_back(From);
    }
    
    Bfs(1);
    
    for(int i = 2; i <= N; ++i)
    {
        cout << Answer[i] << "\n";
    }
}