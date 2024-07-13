#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    string Input;
    cin >> Input;
    
    vector<string> Results;
    
    for(int i =0 ; i < Input.size(); ++i)
    {
        Results.push_back(Input.substr(i, Input.size()));
    }
    
    sort(Results.begin(), Results.end());
    
    for(int i =0 ; i < Results.size(); ++i)
    {
        cout << Results[i] << "\n";
    }
    
}