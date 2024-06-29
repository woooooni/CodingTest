#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int> pq;
    
    int N;
    cin >> N;
    
    for(int i = 0 ; i < N; ++i)
    {
        int Input;
        cin >> Input;
        
        if(0 == Input)
        {
            if(0 == pq.size())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else
        {
            pq.push(Input);
        }
    }
}