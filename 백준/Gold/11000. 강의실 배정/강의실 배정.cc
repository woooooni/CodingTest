#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int Answer;
vector<pair<int, int>> Times;
int main(void)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> N;
    
    for(int i =0 ; i < N; ++i)
    {
        int Start, End;
        cin >> Start >> End;
        
        Times.push_back({Start, End});
    }
    
    sort(Times.begin(), Times.end());
    
    pq.push(Times[0].second);
    
    for(int i = 1; i < Times.size(); ++i)
    {
        if(Times[i].first >= pq.top())
        {
            pq.pop();
            pq.push(Times[i].second);
        }
        else
        {
            pq.push(Times[i].second);
        }
    }
    
    cout << pq.size();
    
}