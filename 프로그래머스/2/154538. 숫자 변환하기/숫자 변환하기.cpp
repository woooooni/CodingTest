#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<bool> visited;
int Bfs(int Start, int End, int N)
{
    queue<pair<int, int>> q;
    visited.resize(End + 1);
    q.push({Start, 0});
    
    while(!q.empty())
    {
        int Sum = q.front().first;
        int Count = q.front().second;
        q.pop();
        
        if(Sum == End)
        {
            return Count;
        }
        
        if(Sum + N <= End && visited[Sum + N] == false)
        {
            visited[Sum + N] = true;
            q.push({Sum + N, Count + 1});
        }
            
        if(Sum * 2 <= End && visited[Sum * 2] == false)
        {
            visited[Sum * 2] = true;
            q.push({Sum * 2, Count + 1});
        }
            
        if(Sum * 3 <= End && visited[Sum * 3] == false)
        {
            visited[Sum * 3] = true;
            q.push({Sum * 3, Count + 1});
        }
            
    }
    
    return -1;
}

int solution(int x, int y, int n) {
    int answer = Bfs(x, y, n);
    
    return answer;
}