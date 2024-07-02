#include <vector>
#include <map>
#include <iostream>

using namespace std;

int main(void)
{
    int T, N;
    
    cin >> T;
    while(T--)
    {
        map<string, int> Cloths;
        cin >> N;
        for(int i = 0; i < N; ++i)
        {
            string Name, Type;
            cin >> Name >> Type;
            
            Cloths[Type]++;
        }
        
        int Sum = 1;
        
        for(auto Cloth : Cloths)
        {
            Sum *= Cloth.second + 1;
        }
        
        cout << Sum - 1 << "\n";
    }
}