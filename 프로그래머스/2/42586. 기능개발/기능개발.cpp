#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for(int i = 0; i < speeds.size(); ++i)
    {
        q.push(i);
    }
    
    while(!q.empty())
    {
        int Cnt = 0;
        for(int i = 0; i < speeds.size(); ++i)
        {
            progresses[i] += speeds[i]; // 시간이 흐른다!
        }
        
        while(!q.empty() && progresses[q.front()] >= 100)
        {
            Cnt++;
            q.pop();
        }
        
        if(Cnt > 0)
            answer.push_back(Cnt);
    }
    
    return answer;
}

