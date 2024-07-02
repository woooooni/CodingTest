#include <iostream>
#include <vector>

using namespace std;



int main(void)
{
    int N;
    cin >> N;
    vector<int> Stairs;
    
    for(int i =0; i < N; ++i)
    {
        int Input = 0;
        cin >> Input;
        Stairs.push_back(Input);
    }
    
    vector<int> DP(N);
    
    DP[0] = Stairs[0];
    DP[1] = Stairs[0] + Stairs[1];
    DP[2] = max(Stairs[0] + Stairs[2], Stairs[1] + Stairs[2]);
    
    for(int i = 3; i < N; ++i)
    {
        DP[i] = max(DP[i - 3] + Stairs[i - 1] + Stairs[i], DP[i - 2] + Stairs[i]);
    }
    
    cout << DP[N - 1];
    
    
}
