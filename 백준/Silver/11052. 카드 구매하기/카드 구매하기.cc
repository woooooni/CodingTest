#include<iostream>
 
#define endl "\n"
#define MAX 1000 + 1
using namespace std;
 
int N;
int Arr[MAX];
int DP[MAX];
 
int Bigger(int A, int B) { if (A > B) return A; return B; }
 
void Input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> Arr[i];
    }
}
 
void Solution()
{
    // DP
    DP[0] = Arr[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            DP[i] = Bigger(DP[i], DP[i - j] + Arr[j]);
        }
    }
    cout << DP[N] << endl;
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    Solve();
 
    return 0;
}
