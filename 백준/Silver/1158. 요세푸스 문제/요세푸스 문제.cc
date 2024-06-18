#include <string>
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    
    queue<int> q;
    for(int i = 1; i<= N; ++i)
    {
        q.push(i);
    }
    
    cout << "<";
    while(!(1 == q.size()))
    {
        for(int i = 1; i < K; ++i)
        {
            int Temp = q.front();
            q.pop();
            q.push(Temp);
        }
        
        int Res = q.front();
        q.pop();
        
        cout << Res << ", ";
    }
    cout << q.front() << ">";
}