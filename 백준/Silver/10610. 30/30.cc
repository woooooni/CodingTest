#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(void)
{
    string Input;
    cin >> Input;
    
    vector<int> Nums;
    
    for(int i = 0; i < Input.size(); ++i)
    {
        Nums.push_back(Input[i] - '0');
    }
    
    sort(Nums.begin(), Nums.end(), greater<int>());
    
    if(Nums[Nums.size() - 1] != 0)
    {
        cout << -1;
        return 0;
    }
    
    long long Sum = 0;
    for(int i =0 ; i <Nums.size(); ++i)
    {
        Sum += Nums[i];
    }
    
    if(Sum % 3 == 0)
    {
        for(int i = 0; i < Nums.size(); ++i)
        {
            cout << Nums[i];
        }
    }
    else
    {
        cout << -1;
    }
        
}
