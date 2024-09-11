#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

string A;
string B;

int Answer = INT_MAX;
int main(void)
{
    cin >> A >> B;
    
    for(int i = 0; i <= B.size() - A.size(); ++i)
    {
        int Cnt = 0;
        for(int j = 0; j < A.size(); ++j)
        {
            if(A[j] != B[j + i])
            {
                Cnt++;
            }
        }
        Answer = min(Answer, Cnt);
    }
    
    cout << Answer;
}