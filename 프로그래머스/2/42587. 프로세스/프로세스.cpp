#include <string>
#include <vector>
#include<queue>
using namespace std;
priority_queue<int> pq;
queue<pair<int,int>> q;
int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    for(int i = 0; i < priorities.size(); ++i)
    {
        q.push({i, priorities[i]});
        pq.push(priorities[i]);
    }
    
    int count = 1;
    
    while(!q.empty()) 
    {
        pair<int, int> current = q.front();
        q.pop();
        
        if(current.second == pq.top())
        {
            if(current.first == location)
            {
                answer = count;
                break;
            }
            else
            {
                count++;
                pq.pop();
            }
        }
        else
        {
            q.push(current);
        }
    }
    
    return answer;
}