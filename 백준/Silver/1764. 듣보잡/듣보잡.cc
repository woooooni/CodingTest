#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>


using namespace std;

int N, M;

set<string> ListenSeePeople;
vector<string> Results;
int main(void)
{
    cin >> N >> M;
   
    for(int i = 0; i < N; ++i)
    {
        string Input;
        cin >> Input;
        ListenSeePeople.emplace(Input);
    }
    
    for(int i = 0; i < M; ++i)
    {
        string Input;
        cin >> Input;
        auto iter = ListenSeePeople.find(Input);
        if(iter != ListenSeePeople.end())
        {
            Results.push_back(*iter);
        }
    }
    
    sort(Results.begin(), Results.end());
    
    cout << Results.size() << "\n";
    for(int i = 0; i < Results.size(); ++i)
    {
        cout << Results[i] << "\n";
    }
    
    
    
       
}