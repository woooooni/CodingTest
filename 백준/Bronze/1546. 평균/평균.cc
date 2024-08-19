#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(void)
{
    int N;
    vector<double> Scores;
    
    cin >> N;
    
    int MaxScore = 0;
    
    for(int i = 0;  i < N; ++i)
    {
        int Input;
        cin >> Input;
        MaxScore = max(MaxScore, Input);
        Scores.push_back(Input);
    }
    
    double Sum = 0;
    for(int i = 0; i < N; ++i)
    {
        Scores[i] = Scores[i] / MaxScore * 100;
        Sum += Scores[i];
    }
    cout << Sum / N;
    
}