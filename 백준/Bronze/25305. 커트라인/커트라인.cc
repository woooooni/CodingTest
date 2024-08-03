#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, K;
    cin >> N >> K;
    
    vector<int> Scores;
    Scores.resize(N);
    
    for(int i =0 ; i < N; ++i)
    {
        cin >> Scores[i];
    }
    
    sort(Scores.begin(), Scores.end());
    
    cout << Scores[N - K];
}