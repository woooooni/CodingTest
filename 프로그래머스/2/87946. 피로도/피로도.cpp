#include <string>
#include <vector>

using namespace std;

bool Visited[9];
int Answer = 0;

void Dfs(int Count, int k, vector<vector<int>>& RefDungeons)
{
    Answer = max(Answer, Count);
    
    for(int i = 0; i < RefDungeons.size(); ++i)
    {
        if(Visited[i] == false && k - RefDungeons[i][0] >= 0)
        {
            Visited[i] = true;
            Dfs(Count + 1, k - RefDungeons[i][1], RefDungeons);
            Visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    Dfs(0, k, dungeons);
    return Answer;
}