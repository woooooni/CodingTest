#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int N;
int Result = 0;
vector<pair<int, int>> Times;

int main(void)
{
    cin >> N;
    Times.resize(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> Times[i].first;
        cin >> Times[i].second;
    }
    
    sort(Times.begin(), Times.end(), [](pair<int, int> Left, pair<int, int> Right){
        if(Left.second == Right.second)
        {
            return Left.first < Right.first;
        }
        else
        {
            return Left.second < Right.second;
        }
    });
    
    int Time = 0;
    for(int i = 0; i < Times.size(); ++i)
    {
        if(Time > Times[i].first) 
            continue;
        
        Result++;
        Time = Times[i].second;
    }
    
    cout << Result;
}