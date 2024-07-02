#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> Dp(N);
    
    Dp[0] = 1;
    Dp[1] = 3;
    
    for(int i = 2; i < Dp.size(); ++i)
    {
        Dp[i] = (Dp[i - 1] + Dp[i - 2] * 2) % 10007;
    }
    
    cout << Dp[N - 1];
}