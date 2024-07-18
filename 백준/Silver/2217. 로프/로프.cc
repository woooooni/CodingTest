#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> Weights;
int Answer = 0;

int main(void)
{
    cin >> N;
    Weights.resize(N);
    for(int i =0 ; i < N; ++i)
    {
        cin >> Weights[i];
    }
    
    sort(Weights.begin(), Weights.end());
    
    for(int i = 0 ; i < N; ++i)
    {
        Answer = max(Answer, (N - i) * Weights[i]);
    }
    cout << Answer;
}