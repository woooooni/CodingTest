#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int N;
vector<int> maze;
vector<bool> visited;

int Bfs()
{
    queue<pair<int, int>> q;
    q.push({0, 0});
    
    while(!q.empty())
    {
        int index = q.front().first;
        int count = q.front().second;
        q.pop();
        
        if(index == N - 1)
        {
            return count;
        }
        
        for(int i = 1; i <= maze[index]; ++i)
        {
            if((index + i) < N && visited[index + i] == false)
            {
                visited[index + i] = true;
                q.push({index + i, count + 1});
            }
        }
    }
    return -1;
}
int main(void)
{
    cin >> N;
    maze.resize(N);
    visited.resize(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> maze[i];
    }
    cout << Bfs();
    
}