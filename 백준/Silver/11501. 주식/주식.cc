#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int T, N;
vector<int> Funds;

int main(void)
{
    cin >> T;
    while(T--)
    {   
        cin >> N;
        Funds.clear();
        
        long long int Answer = 0;
        
        for(int i = 0; i < N; ++i)
        {
            int Input;
            cin >> Input;
            Funds.push_back(Input);
        }
        
        int MaxValue = 0;
        
        for(int i = N - 1; i >= 0; --i)
        {
            MaxValue = max(MaxValue, Funds[i]);
            Answer += MaxValue - Funds[i];
        }
        
        cout << Answer << "\n";
    }
    
}