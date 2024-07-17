#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N;
vector<pair<int, int>> Stuffs;

int MinResult = 2147483646;
void Dfs(pair<int, int> Sum, int Count, int Depth)
{
    if(Depth == N)
    {
        if(Count > 0)
            MinResult = min(MinResult, abs(Sum.first - Sum.second));
        return;
    }
    
    Dfs(Sum, Count, Depth + 1);
    Dfs(make_pair(Sum.first * Stuffs[Depth].first, Sum.second + Stuffs[Depth].second), Count + 1, Depth + 1);
}

int main(void)
{
    cin >> N;
    for(int i =0; i < N; ++i)
    {
        int a, b; // 신맛, 쓴맛
        cin >> a >> b;
        Stuffs.push_back(make_pair(a, b));
    }
    
    Dfs(make_pair(1, 0), 0, 0);
    cout << MinResult;
}