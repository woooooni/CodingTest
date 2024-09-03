#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <queue>

using namespace std;

int N, K;

vector<pair<int, int>> Jewels;
vector<int> Pack;
priority_queue<int, vector<int>, less<int>> pq;

int main(void)
{
    cin >> N >> K;
    Jewels.resize(N);
    for(int i =0; i < N; ++i)
    {
        cin >> Jewels[i].first >> Jewels[i].second;
    }
    
    Pack.resize(K);
    for(int  i =0 ; i < K; ++i)
    {
        cin >> Pack[i];
    }
    
    sort(Jewels.begin(), Jewels.end());
    sort(Pack.begin(), Pack.end());

    int Idx = 0;
    long long int Sum = 0;
    for(int i =0 ; i < Pack.size(); ++i)
    {
        while (Idx < N && Pack[i] >= Jewels[Idx].first) 
        {
            pq.push(Jewels[Idx].second);
            Idx++;
        }
        if (!pq.empty()) 
        {
            Sum += pq.top();
            pq.pop();
        };
    }
    
    cout << Sum;

    
}