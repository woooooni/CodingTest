#include <iostream>
#include <string>
#include <vector>

using namespace std;

int T;
int Students[20] = {};
vector<int> Results;

void Solve()
{
    int Result = 0;
    for(int i = 0; i < 20; ++i)
    {
        for(int j = i; j < 20; ++j)
        {
            if(Students[i] > Students[j])
            {
                Result++;
            }
        }
    }
    Results.push_back(Result);
}

int main(void)
{
    cin >> T;
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(T--)
    {
        int Number;
        cin >> Number;
        
        for(int i =0 ; i < 20; ++i)
        {
            cin >> Students[i];
        }
        Solve();
    }
    
    for(int i =0 ; i < Results.size(); ++i)
    {
        cout << i + 1 << " " << Results[i] << "\n";
    }
}