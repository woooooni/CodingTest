#include <iostream>
#include <string>
#include <queue>

using namespace std;


int E, S, M;

bool Calc(int TestE, int TestS, int TestM)
{
    return (E == TestE) && (S == TestS) && (M == TestM);
}

int main(void)
{
    cin >> E >> S >> M;
    int ResultE = 0, ResultS = 0, ResultM = 0;
    int Answer = 0;
    while(true)
    {
        ResultE = ResultE == 16 ? 1 : ResultE;
        ResultS = ResultS == 29 ? 1 : ResultS;
        ResultM = ResultM == 20 ? 1 : ResultM;
        
        if(Calc(ResultE, ResultS, ResultM))
        {
            cout << Answer;
            return 0;
        }
        
        ResultE++;
        ResultS++;
        ResultM++;
        Answer++;
    }
}