#include <iostream>
#include <string>
#include <vector>
#include <limits.h>

using namespace std;

int N, M;
int MinSix = INT_MAX;
int MinOne = INT_MAX;


int main(void)
{
    cin >> N >> M;
    for(int i =0 ; i < M; ++i)
    {
        int Six, One;
        cin >> Six >> One;
        MinSix = min(Six, MinSix);
        MinOne = min(One, MinOne);
    }
    
    int Answer = MinOne * N;
    Answer = min(Answer, MinSix * (N / 6 + 1));
    Answer = min(Answer, MinSix * ((N / 6)) + (MinOne * (N % 6)));
    
    cout << Answer;
    
}