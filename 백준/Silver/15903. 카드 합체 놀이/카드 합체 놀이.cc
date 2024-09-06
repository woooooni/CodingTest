#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;
int N, M;
int main(void)
{
    long long int Answer = 0;
    cin >> N >> M;
    
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
    
    for(int i = 0; i < N; ++i)
    {
        long long int Input;
        cin >> Input;
        pq.push(Input);
    }
    
    int Count = 0;
    while(Count < M)
    {
        long long int First = pq.top();
        pq.pop();
        
        long long int Second = pq.top();
        pq.pop();
        
        pq.push(First + Second);
        pq.push(First + Second);
        ++Count;
    }
    
    while(!pq.empty())
    {
        Answer += pq.top();
        pq.pop();
    }
    
    cout << Answer;
}