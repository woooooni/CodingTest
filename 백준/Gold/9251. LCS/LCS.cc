#include <iostream>
#include <string>
using namespace std;
int dp[1002][1002];

int main()
{  
    string s1;
    string s2;
    cin >> s1 >> s2;
    dp[0][0] = 0;
    for (int i = 0; i <= s1.length(); i++)
    {
        dp[i][0] = 0;
    } 
    for (int i = 0; i <= s2.length(); i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= s1.length(); i++)
    {
        for (int j = 1; j <= s2.length(); j++)
        {
            if (s1[i-1] == s2[j-1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                // 문자열이 같아 lcs하나 늘려줌
            }
            else
            {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                //둘 중 더 큰 거 선택
            }
        }
    }
    cout << dp[s1.length()][s2.length()];
    return 0;
 
} //1.5h
