#include <queue>
#include <vector>

#include <iostream>

using namespace std;
int N;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

int main(void)
{
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        int Start, End;
        cin >> Start >> End;
        
        pq.push(make_pair(End, Start));
    }
    
    int BeforeStart = 0;
    int BeforeEnd = 0;
    
    int Result = 0;
    while(!pq.empty())
    {
        int CurrentStart = pq.top().second;
        int CurrentEnd = pq.top().first;
        pq.pop();
        
        if(BeforeEnd > CurrentStart)
        {
            continue;
        }
        
        if(CurrentStart == CurrentEnd)
        {
            Result++;
            BeforeStart = CurrentStart;
            BeforeEnd = CurrentEnd;
            continue;
        }
        
        Result++;
        BeforeStart = CurrentStart;
        BeforeEnd = CurrentEnd;
        
    }
    
    cout << Result << "\n";
}