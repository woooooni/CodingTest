#include <iostream>
#include <vector>

using namespace std;

int N;
vector<int> Scores;
int Answer = 0;

int main(void)
{
    cin >> N;
    
    Scores.resize(N);
    for(int i =0 ; i < Scores.size(); ++i)
    {
        cin >> Scores[i];
    }
    
    for(int i = Scores.size() - 1; i > 0 ; --i)
    {
        while(Scores[i] <= Scores[i - 1])
        {
            Scores[i - 1]--;
            Answer++;
        }
    }
    
    cout << Answer;
}