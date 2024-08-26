#include <iostream>
#include <vector>

using namespace std;
int N;
vector<int> Scores;

int main(void)
{
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        int Input;
        cin >> Input;
        Scores.push_back(Input);
    }
    
    int Result = 0;
    int Temp = Scores[N - 1];
    for(int i = N - 2; i >= 0; --i)
    {
        while(Scores[i] >= Temp)
        {
            Scores[i]--;
            Result++;
        }
        Temp = Scores[i];
    }
    
    cout << Result;
}
