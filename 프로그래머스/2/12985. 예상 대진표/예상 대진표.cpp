#include <iostream>
#include <queue>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    queue<pair<int, int>> q;
    for(int i = 1; i <= n; ++i)
    {
        q.push(make_pair(i, 1));
    }
    
    while(!q.empty())
    {
        int First = q.front().first;
        int Round = q.front().second;
        q.pop();
        
        int Second = q.front().first;
        q.pop();
        
        if((First == a && Second == b) || (First == b && Second == a))
        {
            answer = Round;
            break;
        }
        
        if(First == a || First == b)
        {
            q.push(make_pair(First, Round + 1));
            continue;
        }
        else if(Second == a || Second == b)
        {
            q.push(make_pair(Second, Round + 1));
            continue;
        }
        else
        {
            q.push(make_pair(First, Round + 1));
            continue;
        }
    }
    

    return answer;
}