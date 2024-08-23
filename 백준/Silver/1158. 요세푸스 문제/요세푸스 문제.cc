#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;
int N;
int K;

int People[5001] = {};

int main(void)
{
    cin >> N >> K;
    
    queue<int> q;
    
    for(int i = 1; i <= N; ++i)
    {
        q.push(i);
    }
    
    cout << "<";
    while(q.size() > 1)
    {
        for(int i = 0; i < K - 1; ++i)
        {
            int Temp = q.front();
            q.pop();
            q.push(Temp);
        }
        
        int Current = q.front();
        q.pop();
        cout << Current << ", ";
    }
    cout << q.front() << ">";
    
    
}