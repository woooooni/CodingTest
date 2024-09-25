#include <vector>
#include <queue>
using namespace std;

int DirX[4] = {0, 0, -1, 1};
int DirY[4] = {-1, 1, 0, 0};
int Bfs(const vector<vector<int>>& maps, int n, int m)
{
    queue<pair<pair<int, int>, int>> q;
    q.push({{0, 0}, 0});
    
    vector<vector<int>> visited;
    visited.resize(n);
    for(int i =0; i < visited.size(); ++i)
    {
        visited[i].resize(m, false);
    }
    visited[0][0] = true;
    
    while(!q.empty())
    {
        pair<int, int> current = q.front().first;
        int count = q.front().second;
        q.pop();
        
        if(current.first == m - 1 && current.second == n - 1)
        {
            return count + 1;
        }
        
        for(int i =0 ; i < 4; ++i)
        {
            pair<int, int> next = { current.first + DirX[i], current.second + DirY[i] };
            if(0 <= next.first && 0 <= next.second && n > next.second && m > next.first)
            {
                if(visited[next.second][next.first] == false && maps[next.second][next.first] == 1)
                {
                    visited[next.second][next.first] = true;
                    q.push({next, count + 1});
                }
            }
        }
    }
    
    return -1;
}

int solution(vector<vector<int>> maps)
{
    int answer = Bfs(maps, maps.size(), maps[0].size());
    return answer;
}