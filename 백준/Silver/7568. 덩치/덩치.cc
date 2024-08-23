#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<pair<int, int>> People;

bool IsBig(pair<int, int> Left, pair<int, int> Right)
{
    return (Left.first > Right.first) && (Left.second > Right.second);
}

int main(void)
{
    cin >> N;
    
    vector<int> Results;
    
    for(int i = 0; i < N; ++i)
    {
        int Weight;
        int Height;
        cin >> Weight;
        cin >> Height;
        
        People.push_back(make_pair(Weight, Height));
    }
    
    for(int i = 0; i < People.size(); ++i)
    {
        int Rank = 1;
        for(int j =0; j < People.size(); ++j)
        {
            if(i == j)
                continue;
            
            if(true == IsBig(People[j], People[i]))
            {
                ++Rank;
            }
        }
        Results.push_back(Rank);
    }

   
    for(int i = 0; i  < Results.size(); ++i)
    {
        cout << Results[i] << " ";
    }
}