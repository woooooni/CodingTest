#include <iostream>
#include <string>
#include <vector>


using namespace std;

using namespace std;

string Left, Right;
int DP[4001][4001];
int Answer = 0;
int main(void)
{
    cin >> Left >> Right;
    
    for(int i = 0; i < Left.length(); ++i)
    {
        for(int j = 0; j < Right.length(); ++j)
        {
            if(Left.at(i) == Right.at(j))
            {
                DP[i + 1][j + 1] = DP[i][j] + 1;
                Answer = max(Answer, DP[i + 1][j + 1]);
            }
        }
    }
    
    cout << Answer;
}