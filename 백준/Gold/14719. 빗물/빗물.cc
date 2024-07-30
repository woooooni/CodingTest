#include <iostream>
#include <vector>

using namespace std;

int H, W;

int main(void)
{
    cin >> H >> W;
    vector<int> Map(W);
    
    int Result = 0;
    
    for(int i =0 ; i < W; ++i)
    {
        cin >> Map[i];
    }
    
    for(int i =0; i  < Map.size(); ++i)
    {
        int Left = 0;
        int Right = 0;
        
        for(int j = i; j >= 0; --j)
        {
            Left = max(Left, Map[j]);
        }
        
        for(int j = i; j < Map.size(); ++j)
        {
            Right = max(Right, Map[j]);
        }
        
        Result += min(Left, Right) - Map[i];
    }
    
    cout << Result;
    
}