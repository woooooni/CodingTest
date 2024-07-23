#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<int> Numbers;
    Numbers.resize(7);
    for(int i =0 ; i < 7 ; ++i)
    {
        cin >> Numbers[i];
    }
    
    sort(Numbers.begin(), Numbers.end());
    
    int Answer = 0;
    int Idx = Numbers.size();
    for(int i =0 ; i < Numbers.size(); ++i)
    {
        if((Numbers[i] % 2) == 1)
        {
            Answer += Numbers[i];
            Idx = min(Idx, i);
        }
    }
    if(Answer == 0)
    {
        cout << -1;
    }
    else
    {
        cout << Answer << "\n";
        cout << Numbers[Idx];
    }
    
    
}