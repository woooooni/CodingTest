#include <queue>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(NULL);
    
    priority_queue<int> pq;
    for(int i = 0; i < N; ++i)
    {
        int Input;
        cin >> Input;
        if(Input == 0)
        {
            if(pq.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                int Result = pq.top();
                pq.pop();
                cout << -1 * Result << "\n";
            }
            
        }
        else
        {
            pq.push(-1 * Input);
        }
    }
}
