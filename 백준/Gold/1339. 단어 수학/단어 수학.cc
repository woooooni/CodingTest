#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int N;
vector<int> Weights(26);
vector<string> Inputs;

int main(void)
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    Inputs.resize(N);
    for(int i =0 ; i <N; ++i)
    {
        cin >> Inputs[i];
    }
    
    for(int i =0; i < Inputs.size(); ++i)
    {
        int Pow = 1;
        for(int j = Inputs[i].length() - 1; j >= 0; --j)
        {
            int Idx = Inputs[i][j] - 'A';
            Weights[Idx] += Pow;
            Pow *= 10;
        }
    }
    
    int Answer = 0;
    sort(Weights.begin(), Weights.end(), greater<int>());
    
    int Mul = 9;
    for(int i =0 ; i < Weights.size(); ++i)
    {
        if(Weights[i] != 0)
        {
            Answer += Weights[i] * Mul;
            Mul--;   
        }
    }
    
    cout << Answer;
}