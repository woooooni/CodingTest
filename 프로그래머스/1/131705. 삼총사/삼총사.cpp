#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<bool> visited;
int Answer = 0;
void Dfs(int Depth, int Sum, int Start, const vector<int>& number)
{
    if(Depth == 3)
    {
        if(Sum == 0)
        {
            Answer++;
        }
        return;
    }
    
    for(int i = Start; i < number.size(); ++i)
    {
        if(visited[i] == false)
        {
            visited[i] = true;
            Dfs(Depth + 1, Sum + number[i], i, number);
            visited[i] = false;
        }
    }
    
}

int solution(vector<int> number) {
    int answer = 0;
    visited.resize(number.size());
    Dfs(0, 0, 0, number);
    
    answer = Answer;
    return answer;
}