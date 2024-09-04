#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> Coins;

int N, K;
int main(void)
{
    int Answer = 0;
    cin >> N >> K;
    
    Coins.resize(N);
    
    for(int i = 0; i < N; ++i)
    {
        cin >> Coins[i];
    }
    
    for(int i = Coins.size() - 1; i >= 0; --i)
    {
        if(K >= Coins[i])
        {
            int Cnt = K / Coins[i];
            K -= Coins[i] * Cnt;
            Answer += Cnt;
        }
    }
    
    cout << Answer;
}