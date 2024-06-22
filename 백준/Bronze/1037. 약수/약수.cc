#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, Result;
    cin >> N;
    
    vector<int> Numbers;
    
    for(int i = 0; i< N; ++i)
    {
        int Number;
        cin >> Number;
        
        Numbers.push_back(Number);
    }
    
    sort(Numbers.begin(), Numbers.end());
    
    if(Numbers.size() > 1)
    {
        Result = Numbers[0] * Numbers[Numbers.size() - 1];
    }
    else
    {
        Result = Numbers[0] * Numbers[0];
    }
    
    cout << Result;
    
}