#include <string>
#include <vector>

using namespace std;

int DP[100001];

int Fibo(int Num)
{
    DP[0] = 0;
    DP[1] = 1;
    
    for(int i = 2; i <= Num; ++i)
    {
        DP[i] = (DP[i - 2] + DP[i - 1]) % 1234567;
    }
    
    return DP[Num];
}

int solution(int n) {
    int answer = 0;
    if(n >= 1234567)
    {
        n %= 1234567;
    }
    answer = Fibo(n);
    return answer;
}