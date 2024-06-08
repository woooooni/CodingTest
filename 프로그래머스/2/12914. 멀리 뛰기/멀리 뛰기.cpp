#include <string>
#include <vector>

using namespace std;

long long dp[2001];
const int mod = 1234567;

long long solution(int n) {
    dp[1] = 1; // 1칸까지 가는 방법 (1칸)
    dp[2] = 2; // 2칸까지 가는 방법 (1칸, 1칸), (2칸)

    for(int i = 3 ;i <= n;i++)
        dp[i] = (dp[i-1] + dp[i-2]) % mod;

    return dp[n];
}