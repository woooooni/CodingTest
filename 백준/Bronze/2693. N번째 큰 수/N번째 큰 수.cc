#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    
    int T;
    cin >> T;
    
    while(T--)
    {
        vector<int> Numbers;
        Numbers.resize(10);
        for(int i =0 ; i < 10; ++i)
        {
            cin >> Numbers[i];
        }
            
        sort(Numbers.begin(), Numbers.end());
        
        cout << Numbers[Numbers.size() - 3] << "\n";
    }
}