#include <iostream>
#include <queue>
#include <limits.h>

using namespace std;

int SCV[3];
int Answer = INT_MAX;
int DP[61][61][61] = { INT_MAX };

void Solve(int First, int Second, int Third, int Count)
{
    First = max(0, First);
    Second = max(0, Second);
    Third = max(0, Third);
    
    if (DP[First][Second][Third] <= Count)
        return;

    DP[First][Second][Third] = Count;
    if(First == 0 && Second == 0 && Third == 0)
    {
        Answer = min(Answer, Count);
        return;
    }
    
    Solve(First - 9, Second - 3, Third - 1, Count + 1);
    Solve(First - 9, Second - 1, Third - 3, Count + 1);
    Solve(First - 3, Second - 9, Third - 1, Count + 1);
    Solve(First - 3, Second - 1, Third - 9, Count + 1);
    Solve(First - 1, Second - 3, Third - 9, Count + 1);
    Solve(First - 1, Second - 9, Third - 3, Count + 1);
    
}

int main(void)
{
    int N;
    cin >> N;
    
    for(int i  =0 ; i < N; ++i)
        cin >> SCV[i];
    
    for (int i = 0; i < 61; ++i)
        for (int j = 0; j < 61; ++j)
            for (int k = 0; k < 61; ++k)
                DP[i][j][k] = INT_MAX;


    Solve(SCV[0], SCV[1], SCV[2], 0);
    cout << Answer;
}