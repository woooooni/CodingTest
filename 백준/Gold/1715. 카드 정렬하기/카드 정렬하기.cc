#include <iostream>
#include <queue>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int main(void)
{
    cin >> N;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    if(N == 1)
    {
        cout << 0;
        return 0;
    }
    
    for(int i = 0; i < N; ++i)
    {
        int Input;
        cin >> Input;
        pq.push(Input);
    }
    
    int Answer = 0;
    while(!pq.empty())
    {
        int Sum = 0;
        Sum += pq.top();
        pq.pop();
        
        if(!pq.empty())
        {
            Sum += pq.top();
            pq.pop();
            if(!pq.empty())
                pq.push(Sum);
        }
        
        Answer += Sum;
    }
    
    cout << Answer;
}