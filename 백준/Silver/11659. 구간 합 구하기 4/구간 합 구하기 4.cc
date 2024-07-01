#include <bits/stdc++.h>


using namespace std;

vector<int> Numbers;
int main(void)
{
    int N, M;
    cin >> N >> M;
    
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    Numbers.resize(N + 1);
    Numbers[0] = 0;
    
    for(int i = 1; i <= N; ++i)
    {
        int Input;
        cin >> Input;
        Numbers[i] = Numbers[i - 1] + Input;
    }
    
    int Result = 0;
    for(int i = 0; i < M; ++i)
    {
        int From, To;
        cin >> From >> To;
        
        Result = Numbers[To] - Numbers[From - 1];
        cout << Result << "\n";
        
    }
}