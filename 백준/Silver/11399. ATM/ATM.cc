#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int>> People;

int main(void)
{
    cin >> N;
    
    People.resize(N);
    
    for(int i = 0; i < People.size(); ++i)
    {
        cin >> People[i].first;
        People[i].second = i;
    }
    sort(People.begin(), People.end());
    
    int Ans = 0;
    for(int i = 1; i < People.size(); ++i)
    {
        People[i].first += People[i - 1].first;
    }
    
    for(int i = 0; i < People.size(); ++i)
    {
        Ans += People[i].first;
    }
   
    
    
    cout << Ans;
}